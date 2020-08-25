switch op[0]:

// CMP
case 0x12:
    switch op[1]:
        // size = 0xb
        // cmp 
        0x10: 
            
        0x20:
            uVar6 = (uint)regs[2] & 0x8000
            uVar7 = (uint)regs[2] & 0x8000
            uVar8 = ((uint)regs[2]&0xffff) - ((uint)regs[3]&0xffff)
            if regs[2]&0xffff < reg[3]&0xffff:
                // 0b1000 置 1 
                // bit[3] = 1
                vm[0x13] = vm[0x13] | 8
            else:
                // bit[3] = 0
                vm[0x13] = vm[0x13] & 0xfffffffffffffff7

            if uVar6==uVar7 || (uVar8 & 0x8000) == uVar6:
                // 0b0 置 0
                // bit[0] = 0
                vm[0x13] = vm[0x13] & 0xfffffffffffffffe
            else:
                // bit[0] = 1
                vm[0x13] = vm[0x13] | 1

            if uVar8 & 0x8000 == 0:
                // bit[1] = 0
                vm[0x13] = vm[0x13] & 0xfffffffffffffffd
            else:
                // bit[1] = 1
                vm[0x13] = vm[0x13] | 2

            // equal 0100
            if uVar8 & 0xffff == 0:
                // bit[2] = 1
                vm[0x13] = vm[0x13] | 4
            else:
                // bit[2] = 0
                vm[0x13] = vm[0x13] & 0xfffffffffffffffb

            
            regs[2]&0xffff < regs[3]&0xffff [8]
            if [4] != 0:
                case 0x14: JE

            if [4] == 0:
                case 0x15: JNE

            if [4] == 0 && [2] >> 1 == [1]:
                case 0x16: JG
            
            if [4] != 0 || [2] >> 1 != [1]:
                case 0x17: JNG
            
            if [2] >> 1 == [1]:
                case 0x18: JL
            
            if [2] >> 1 != [1]:
                case 0x19: JNL
            
            if [8] == 0 && [4] == 0:
                case 0x1a: JA
            
            if [8] == 0 && [4] != 0:
                case 0x1b: JNA
            
            if [8] != 0:
                case 0x1c: JB
            
            if [8] == 0:
                case 0x1d: JNB
            
        0x30:
        0x40:

        // size = 4 5 7 0xb
        // cmp regs[2], imm
        0x15:
        0x25:
            cmp regs[2], (short)imm (op[3-4])
        0x35:
        0x45: