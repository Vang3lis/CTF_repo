switch op[0]

// HLT
case 0x00:
    return 1;
    
// mov
case 0x01:
switch op[1]&0xf
    // size = 4     1 | 1
    // mov regs[2], regs[3]
    case 0: 
        0x10: regs[2] = regs[3] & 0xff
        0x20: regs[2] = regs[3] & 0xffff
        0x30: regs[2] = regs[3] & 0xffffffff
        0x40: regs[2] = regs[3]
    
    // size = 0xb   1 | 8
    // mov regs[2], data[3-0xb]
    case 1:
        0x11: regs[2] = data[3-0xb]&0xff
        0x21:
        0x31:
        0x41:
    
    // size = 0xb   8 | 1
    // mov data[2-0xa], regs[0xa] 
    case 2:
        0x12: data[2-0xa] = regs[0xa]*0xff
        0x22:
        0x32:
        0x42:
    
    // size = 0xb   1 | 8
    // mov regs[2], stack[3-0xb]
    case 3:
        0x13: regs[2] = stack[3-0xb]&0xff
        0x23:
        0x33:
        0x43:
    
    // size = 0xb   8 | 1
    // mov stack[2-0xa], regs[0xa]
    case 4:
        0x14: stack[2-0xa] = regs[0xa]&0xff
        0x24:
        0x34:
        0x44:

    // size = 4 5 7 0xb
    // mov regs, imm
    case 5:
        0x15: regs[2] = op[3]       // 1 | 1
        0x25: regs[2] = op[3-4]     // 1 | 2
        0x35: regs[2] = op[3-6]     // 1 | 4
        0x45: regs[2] = op[3-0xa]   // 1 | 8
    
    // size = 4
    // mov data[regs[2]], regs[3]
    case 0xb:
        0x1b: data[regs[2]] = regs[3]&0xff


