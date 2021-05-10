#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
cough
10174cdbf10810c
"""

def hash1(s):
    x = 0
    for i in s:
        if ord("0") <= ord(i) <= ord("9"):
            x = x*5 + (ord(i)-ord("0"))%5
        elif i != "f":
            x = x*5 + (ord(i)-ord("a"))%5
        else:
            x = x*5 + 2
        x %= 7

    return x
    
def hash2(s, mod):
    x = 0
    for i in s:
        if ord("0") <= ord(i) <= ord("9"):
            x = x*16 + (ord(i)-ord("0"))
        else:
            x = x*16 + (ord(i)-ord("a")+10)
        x %= mod

    return x

flag = dict()

#  print(hash1("10174cdbf10810c"))
#  print(hash2("10174cdbf10810c", 31337))

# 5[0-9] 4[a-f] 5[0-9] 1[a-f]

# 1010x [b-f]cdb|cdb[cef] 10xxx [x10xx xx10x xxx10] [bcd]
# 10x10 cdb 10xxx [x10xx xx10x xxx10] [bcd]
# exchange _1 _3

# _0: 1010x, 10x10, 10
# _1: [b-f]cdb|cdb[cef]
# _2: 10xxx x10xx xx10x xxx10
# _3: [bcd]
# exchange _1 _3
# exchange _0 _2: check startwith 10
for i in range(10000):
    l = []
    n = i
    while 1:
        if n == 0:
            break
        l.append(chr(ord("0") + n%10))
        n //= 10
    
    for i in range(4-len(l)):
        l.append("0")

    _0 = ["1010"+l[0], "10"+l[0]+"10", "10"]
    _1 = []
    _2 = []
    _3 = ["b", "c", "d"]
    for j in "bcdef":
        _1.append(j+"cdb")
    _1 += ["cdbc", "cdbe", "cdbf"]

    # xxx
    ll = l[1:]
    for j in range(4):
        _l = ll.copy()
        _l.insert(j, "10")
        _2.append("".join(_ for _ in _l))
    _2.append("10")
    
    #  print(_0)
    #  print(_1)
    #  print(_2)
    #  print(_3)
    

    price = [73331, 31337, 313337, 133337]
    for a in _0:
        for b in _1:
            for c in _2:
                for d in _3:
                    _ = [a+b+c+d, a+d+c+b, c+b+a+d, c+d+a+b]
                    for s in _:
                        if not s.startswith("10"):
                            continue
                        if s.count("10") != 3:
                            continue
                        if "73" in s:
                            continue
                        if hash1(s) != 0:
                            continue

                        for p in price:
                            if hash2(s, p) == 7777:
                                if p not in flag:
                                    flag[p] = set()
                                flag[p].add(s)

for p in flag:
    print("price: {}".format(p))
    for _ in flag[p]:
        print('"{}",'.format(_))

"""
price: 73331
10104b94710cdbc
10102fcdb71410d
10388b10610ecdb
10106cdbf75102d
10105c41075cdbe
10341c10109cdbf
10108b05100cdbf
price: 31337
10102ccdb81042c
10610b41074dcdb
10101fcdb21039b
10110c10015fcdb
10108c61210cdbe
10610ccdb61072d
10210d10383dcdb
10584d10101cdbc
10610cdbc71008b
10108d08810ecdb
10452d10310bcdb
10108c31025cdbf
10100cdbe41011c
10109c21037cdbe
10310d99010cdbc
10174cdbf10810c
10810cdbc10818d
10108cdbe10434c
10101cdbf81051c
10107bcdb85100c
10210ecdb79106c
10108c10562fcdb
10101b10548dcdb
10103d33610cdbc
10607ccdb10103b
10638fcdb10210c
10104c10062ecdb
10710dcdb79610c
price: 133337
10101cdbe10539c
10310c10293cdbf
10109dcdb10539b
10109ccdb82104d
10210cdbf10097b
"""

# c: 73331
# cough: $31337.00
# cannot stand: $313337.00
# stomach pain: $133337.00

