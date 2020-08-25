switch op[0]:

// POP
case 0xd:
    switch op[1]:
        // size = 3
        0x16: regs[2] = (*rsp) & 0xff
        0x26:
        0x36:
        0x46:

// RET
case 0x11:
    l_e0 = *rsp
    rsp += 8