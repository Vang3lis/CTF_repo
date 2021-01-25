# 2018 QWB core

 解压 cpio 指令

```
 mv ../core.cpio core.cpio.gz
 gunzip ./core.cpio.gz 
```



`checksec`  查看 vmlinux 的一些保护



gdb 调试

```
set arch 或者 gdb ./vmlinux
add-symbol-file ./core.cpio address
target remote:1234
```



外面直接给的 vmlinux 不靠谱，通过解压 cpio 才是正确的



查看某个模块的 .text 的地址

```
cat /sys/module/module_name/section/.text
```



编译 exp 静态编译



cop

```
pop rdx; ret;
pop rdx; ret;
mov rdi, rax; call rdx;
function
```

在 `call rdx` 之后，通过`pop`指令把返回地址`pop`掉，然后再`ret`到自己想要的地址



修改 `init`可以便于调试和查看



> https://ctf-wiki.org/pwn/linux/kernel/kernel_rop/