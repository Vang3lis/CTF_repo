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
#define OR  0x08
#define AND 0x09
#define SHL 0x0a
#define SHR 0x0b
#define NOT 0x0c
//STACK
#define POP  0x0d
#define PUSH 0x0e
//FUNC
#define CALL 0x10
#define RET  0x11
//JMP
#define CMP 0x12
#define JMP 0x13
#define JE  0x14
#define JNE 0x15
#define JG  0x16
#define JNG 0x17
#define JL  0x18
#define JNL 0x19
#define JA  0x1a
#define JNA 0x1b
#define JB  0x1c
#define JNB 0x1d
//INT
#define SYSCALL 0x20

//ADDR
#define RR  0X00
#define RL  0x01
#define LR  0x02
#define RS  0x03
#define SR  0x04
#define RI  0x05
#define R_  0X06
#define I_  0x07
#define L_  0x08
#define S_  0x09
#define __  0x0a
#define PR  0x0b //RegLoad Reg
#define RP  0x0c //Reg RegLoad
#define QR  0x0d //RegStack Reg
#define RQ  0x0e //Reg RegStack

//WIDTH
#define BYTE  0x10
#define WORD  0x20
#define DWORD 0x30
#define QWORD 0x40

#define WIDTH(X) (X & 0xf0)
#define ADDR(X)  (X & 0x0f)

#define S_O(X) (X |= 0b0000000000000001)
#define S_S(X) (X |= 0b0000000000000010)
#define S_Z(X) (X |= 0b0000000000000100)
#define S_C(X) (X |= 0b0000000000001000)

#define C_O(X) (X &= ~(0b0000000000000001))
#define C_S(X) (X &= ~(0b0000000000000010))
#define C_Z(X) (X &= ~(0b0000000000000100))
#define C_C(X) (X &= ~(0b0000000000001000))


#define R_O(X) (X & 0b0000000000000001)
#define R_S(X) ((X & 0b0000000000000010) >> 1)
#define R_Z(X) ((X & 0b0000000000000100) >> 2)
#define R_C(X) ((X & 0b0000000000001000) >> 3)

enum SYSCALLS {
    _SYS_OPEN = 0,
    _SYS_READ = 1,
    _SYS_WRITE,
    _SYS_CLOSE
};
