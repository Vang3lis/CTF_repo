switch op[0]:

// 8    4   2   1
// SF   ZF

// JUMP
case 0x13:
    handle_jump

// JE
// ZF == 1
case 0x14:
    if vm[0x13] & 4 != 0:
        handle_jump

// JNE
case 0x15:
    if vm[0x13] & 4 == 0:
        handle_jump
    
// JG: jump if greater: if > then jump 
case 0x16:
    if vm[0x13] & 4 == 0 && (vm[0x13] & 2) >> 1 == vm[0x13] & 1:
        handle_jump


// JNG
case 0x17:
    if vm[0x13] & 4 != 0 || (vm[0x13] & 2) >> 1 != vm[0x13] & 1:
        handle_jump

// JL
case 0x18:
    if (vm[0x13] & 2) >> 1 != vm[0x13] & 1
        handle_jump

// JNL
case 0x19:
    if (vm[0x13] & 2) >> 1 == vm[0x13] & 1
        handle_jump

// JA: jump above (unsigned)
case 0x1a:
    if vm[0x13] & 8 == 0
        jump case 0x15

// JNA
case 0x1b:
    if vm[0x13] & 8 == 0
        jump case 0x14

// JB: jump below (unsigned)
case 0x1c:
    if vm[0x13] & 8 != 0:
        handle_jump

// JNB
case 0x1d:
    if vm[0x13] & 8 == 0:
        handle_jump

handle_jump:

    switch op[1]
        // size = 3 4 6 10
        // jump pc+offset
        0x17:
            /*strange*/
            if op[2] < 0:
                offset = -op[2]
                if l_e0 < offset:
                    return 1
                l_e0 = le0 - offset
        0x27:
            pc += op[2-3]
        0x37:
        0x47:

        // size = 10
        // jump pc+data[offset]
        0x48: pc += (ulong)data[*op[2-10]]

        // size = 3
        // jump pc+regs[2]
        op[1]&0xf:
        0x6: pc += regs[2]