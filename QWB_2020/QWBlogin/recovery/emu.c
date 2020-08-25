// gcc ./emu.c -o emu
// usage: ./emu ./test.bin
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <malloc.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>

//INST
#define HLT 0x00
#define MOV 0x01
//CALC
#define ADD 0x02
#define SUB 0x03
#define MUL 0X04
#define DIV 0x05
#define MOD 0X06
//BIT
#define XOR 0x07
#define OR 0x08
#define AND 0x09
#define SHL 0x0a
#define SHR 0x0b
#define NOT 0x0c
//STACK
#define POP 0x0d
#define PUSH 0x0e
//FUNC
#define CALL 0x10
#define RET 0x11
//JMP
#define CMP 0x12
#define JMP 0x13
#define JE 0x14
#define JNE 0x15
#define JG 0x16
#define JNG 0x17
#define JL 0x18
#define JNL 0x19
#define JA 0x1a
#define JNA 0x1b
#define JB 0x1c
#define JNB 0x1d
//INT
#define SYSCALL 0x20

//ADDR
#define RR 0X00 // reg <- reg
#define RL 0x01 // reg <- data
#define LR 0x02 // data -> reg
#define RS 0x03 // reg -> stack
#define SR 0x04 // stack
#define RI 0x05
#define R_ 0X06
#define I_ 0x07
#define L_ 0x08 // data
#define S_ 0x09 // stack
#define __ 0x0a
#define PR 0x0b //RegLoad Reg
#define RP 0x0c //Reg RegLoad
#define QR 0x0d //RegStack Reg
#define RQ 0x0e //Reg RegStack

//WIDTH
#define BYTE 0x10
#define WORD 0x20
#define DWORD 0x30
#define QWORD 0x40

#define WIDTH(X) (X & 0xf0)
#define ADDR(X) (X & 0x0f)
enum SYSCALLS
{
    _SYS_OPEN = 0,
    _SYS_READ = 1,
    _SYS_WRITE = 2,
    _SYS_CLOSE = 3
};
const char *const widthstr[] = {[BYTE] = "byte", [WORD] = "word", [DWORD] = "dword", [QWORD] = "qword"};
const char *const opnamestr[] = {
    "hlt", "mov",                            // inst
    "add", "sub", "mul", "div", "mod",       // calc
    "xor", "or", "and", "shl", "shr", "not", // bit
    "pop", "push",                           // stack
    "err_op",
    "call", "ret",                                                                 // func
    "cmp", "jmp", "je", "jne", "jg", "jng", "jl", "jnl", "ja", "jna", "jb", "jnb", // jmp
    "syscall"                                                                      // int
};
// const char *
int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");

    if (!fp)
    {
        return 1;
    }

    char *buf = calloc(0x2000, 1);
    fread(buf, 1, 0x2000, fp);

    char *pc = buf + 256;
    while (1)
    {
        switch (*pc)
        {
        case HLT:
            printf("hlt\n");
            pc += 2;
            break;
        case MOV:
            // pc++;
            switch (ADDR(pc[1]))
            {
            case RR:
                printf("mov %s r%d, r%d\n", widthstr[WIDTH(pc[1])], pc[2], pc[3]);
                pc += 4;
                break;
            case RL:
                printf("mov r%d, %s ptr data[%#x]\n", pc[2], widthstr[WIDTH(pc[1])], *(int64_t *)(pc + 3));
                pc += 11;
                break;
            case LR:
                printf("mov %s ptr data[%#x], r%d\n", widthstr[WIDTH(pc[1])], *(int64_t *)(pc + 2), pc[10]);
                pc += 11;
                break;
            case RS:
                printf("mov r%d, %s ptr stack[%#x]\n", pc[2], widthstr[WIDTH(pc[1])], *(int64_t *)(pc + 3));
                pc += 11;
                break;
            case SR:
                printf("mov %s ptr stack[%#x], r%d\n", widthstr[WIDTH(pc[1])], *(int64_t *)(pc + 2), pc[10]);
                pc += 11;
                break;
            case RI:
            {
                uint64_t val;
                printf("mov r%d, %s ", pc[2], widthstr[WIDTH(pc[1])]);
                switch (WIDTH(pc[1]))
                {
                case BYTE:
                    val = *(uint8_t *)(pc + 3);
                    pc += 4;
                    break;
                case WORD:
                    val = *(uint16_t *)(pc + 3);
                    pc += 5;
                    break;
                case DWORD:
                    val = *(uint32_t *)(pc + 3);
                    pc += 7;
                    break;
                case QWORD:
                    val = *(uint64_t *)(pc + 3);
                    pc += 11;
                    break;
                }
                printf("%#llx\n", val);
                break;
            }

            case PR:
                printf("mov %s ptr data[r%d], r%d\n", widthstr[WIDTH(pc[1])], pc[2], pc[3]);
                pc += 4;
                break;
            case RP:
                printf("mov r%d, %s ptr data[r%d]\n", pc[2], widthstr[WIDTH(pc[1])], pc[3]);
                pc += 4;
                break;
            case QR:
                printf("mov %s ptr stack[r%d], r%d\n", widthstr[WIDTH(pc[1])], pc[2], pc[3]);
                pc += 4;
                break;
            case RQ:
                printf("mov r%d, %s ptr stack[r%d]\n", pc[2], widthstr[WIDTH(pc[1])], pc[3]);
                pc += 4;
                break;
            default:
                printf("UNKNOWN MOV ADDR TYPE %x\n", ADDR(pc[1]));
                break;
            }
            break;
        case ADD:
        case SUB:
        case MUL:
        case DIV:
        case MOD:
        case XOR:
        case OR:
        case AND:
        case SHL:
        case SHR:
        handle_cmp: // because operand of cmp is the same
            switch (ADDR(pc[1]))
            {
            case RR:
                printf("%s %s r%d, r%d\n", opnamestr[pc[0]], widthstr[WIDTH(pc[1])], pc[2], pc[3]);
                pc += 4;
                break;
            case RI:
            {
                uint64_t val;
                printf("%s r%d, %s ", opnamestr[pc[0]], pc[2], widthstr[WIDTH(pc[1])]);
                switch (WIDTH(pc[1]))
                {
                case BYTE:
                    val = *(uint8_t *)(pc + 3);
                    pc += 4;
                    break;
                case WORD:
                    val = *(uint16_t *)(pc + 3);
                    pc += 5;
                    break;
                case DWORD:
                    val = *(uint32_t *)(pc + 3);
                    pc += 7;
                    break;
                case QWORD:
                    val = *(uint64_t *)(pc + 3);
                    pc += 11;
                    break;
                }
                printf("%#llx\n", val);
                break;
            }
            default:
                printf("UNKNOWN CALC/BIT ADDR TYPE %x\n", ADDR(pc[1]));
                break;
            }
            break;
        case NOT:
            // fall through because their operand is the same
        case POP:
        case PUSH:
            printf("%s %s r%d\n", opnamestr[pc[0]], widthstr[WIDTH(pc[1])], pc[2]);
            pc += 3;
            break;
        case CALL:
            pc += 3;
            printf("call %#x %#x %#x\n", pc[1], pc[2], pc[3]);
            break;
        case RET:
            printf("ret\n");
            return 0; // test.bin ends here

            pc += 2;
            break;
        case CMP:
            goto handle_cmp;
            break;
        case JMP:
        case JE:
        case JNE:
        case JG:
        case JNG:
        case JL:
        case JNL:
        case JA:
        case JNA:
        case JB:
        case JNB:
            switch (pc[1])
            {
                case 0x17: 
                    printf("%s %#x\n", opnamestr[*pc], *(int8_t*)&pc[2]);
                    pc += 3;
                    break;
                case 0x27:
                    printf("%s %#x\n", opnamestr[*pc], *(short*)&pc[2]);
                    pc += 4;
                    break;
                case 0x37:
                    printf("%s %#x\n", opnamestr[*pc], *(int*)&pc[2]);
                    pc += 6;
                    break;
                case 0x47:
                    printf("%s %#llx\n", opnamestr[*pc], *(int64_t*)&pc[2]);
                    pc += 10;
                    break;
                case 0x48:
                    printf("%s %#llx\n", opnamestr[*pc], *(int64_t*)(buf+0x100+*(int64_t*)&pc[2]));
                    pc += 10;
                    break;
                case 0x6:
                case 0x16:
                case 0x26:
                case 0x36:
                    printf("%s r%d\n", opnamestr[*pc], *(int8_t*)&pc[2]);
                    pc += 3;
                    break;
            }
            break;
        case SYSCALL:
            pc++;
            if (*pc == L_)
            {
                printf("syscall data\n");
            }
            else
            {
                printf("syscall stack\n");
            }
            pc++;
            break;
        default:
            printf("WTF\n");
            pc++;
            break;
        }
    }

    return 0;
}
