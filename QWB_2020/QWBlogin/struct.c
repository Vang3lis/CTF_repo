//gcc -ffreestanding -g ./struct.c -o struct.o

#include<stdlib.h>

struct VM
{
    int64_t r00;
    int64_t r01;
    int64_t r02;
    int64_t r03;
    int64_t r04;
    int64_t r05;
    int64_t r06;
    int64_t r07;
    int64_t r08;
    int64_t r09;
    int64_t r0a;
    int64_t r0b;
    int64_t r0c;
    int64_t r0d;
    int64_t r0e;
    int64_t r0f;
    int64_t r10;
    int64_t r11;
    int64_t pc;             // vm[0x12]
    int64_t flags;          // vm[0x13]
    int64_t text_size;      // vm[0x14]
    int64_t text_segment;   // vm[0x15]
    int64_t data_size;      // vm[0x16]
    int64_t data_segment;   // vm[0x17]
    int64_t g_Var;          // 0x18 struct (int_no=0) -> 0x18 (int_no=1) -> 0x18 (int_no=2)
    int64_t stack;          // vm[0x19]
    // int64_t 
};

int main()
{
	struct VM sm;
	sm.r00 = 1;
	return 0;
}
