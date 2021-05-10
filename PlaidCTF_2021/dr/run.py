#!/usr/bin/env python
# -*- coding: utf-8 -*-

from pwn import *
# context.log_level = "debug"
context.log_level = "info"

def r(sym, key):
    io = process("./dr")
    
    io.sendlineafter("> ", "3")
    io.sendlineafter("> ", sym)
    io.sendlineafter("> ", "yes")
    io.sendlineafter("> ", key)

    io.recvuntil("Your insurance")
    print(io.recvline())

    io.close()


d = dict()
d["c"] = [
"10106cdbf75102d",
"10388b10610ecdb",
"10108b05100cdbf",
"10102fcdb71410d",
"10341c10109cdbf",
"10104b94710cdbc",
"10105c41075cdbe"
]
d['cough'] = [
"10103d33610cdbc",
"10610cdbc71008b",
"10607ccdb10103b",
"10101fcdb21039b",
"10108d08810ecdb",
"10610ccdb61072d",
"10174cdbf10810c",
"10584d10101cdbc",
"10104c10062ecdb",
"10610b41074dcdb",
"10310d99010cdbc",
"10108c61210cdbe",
"10108cdbe10434c",
"10101b10548dcdb",
"10810cdbc10818d",
"10210d10383dcdb",
"10107bcdb85100c",
"10100cdbe41011c",
"10210ecdb79106c",
"10109c21037cdbe",
"10638fcdb10210c",
"10108c10562fcdb",
"10710dcdb79610c",
"10452d10310bcdb",
"10110c10015fcdb",
"10108c31025cdbf",
"10102ccdb81042c",
"10101cdbf81051c"
]
d['stomach pain'] = [
"10310c10293cdbf",
"10101cdbe10539c",
"10109dcdb10539b",
"10109ccdb82104d",
"10210cdbf10097b"
]

for sym in d:
    for key in d[sym]:
        print(sym, key)
        r(sym, key)
    
# PCTF{a_pr1m3_a_day_k33ps_th3_D0ctor_Firmly_Away}