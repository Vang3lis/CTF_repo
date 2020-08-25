__off_t sub_ba0(char* path)
{
    if path exist
        return file.size
    else
        return -1
}

sub_c1a(int64_t* a1)
{
    if(a1[0x14] - 2 < a1[0x12])
        return 1;
    
    // check a1[0x12]+a1[0x15]+1 & 0xf / 0xf0
    // a[0x12]/0x90 => pc
    // a[0x14] text_segment_size
    // a[0x15] = text_segment_addr
    // a[0x16] data_segment_size
    // a[0x17] = data_segment_addr
    // a1[0x12] a1[0x14] and a1[0x14] > a1[0x12]
    switch( *(int8_t*)(a1[0x12]+a1[0x15]+1) & 0xf)
    {
        case 0:
        case 11:
        case 12:
        case 13:
        case 14:
            if(a1[0x14] - a1[0x12] < 4)
                return 1;
            l_e0 = a1[0x12] + 4;
            break;

        case 1:
        case 2:
        case 3:
        case 4:
            int64_t l_e0;
            if(a1[0x14] - a1[0x12] < 0xb)
                return ;
            l_e0 = a1[0x12] + 0xb;

        case 5:
            int8_t bVar5 = *(int8_t*)(a1[0x12]+a1[0x15]+1) & 0xf0;
            if( bVar5 == 0x20)
            {
                if(a1[0x14] - a1[0x12] < 5)
                    return 1;
                l_e0 = a1[0x12] + 5;
            }
            else {
                if(bVar5 < 0x21)
                {
                    if(bVar5 != 0x10)
                        return 1;
                    
                    if(a1[0x14] - a1[0x12] < 4)
                        return 1;
                    l_e0 = a1[0x12] + 4;
                }
                else{
                    if(bVar5 == 0x30)
                    {
                        if(a1[0x14] - a1[0x12] < 7)
                            return 1; 
                        l_e0 = a1[0x12] + 7;
                    }
                    else{
                        if(bVar5 != 0x40)
                            return 1;

                        if(a1[0x14] - a1[0x12] < 0xb)
                            return 1;
                        l_e0 = a1[0x12] + 0xb;
                    }
                }
            }
            break;

        case 6:
            if(a1[0x14] - a1[0x12] < 3)
                return 1;
            l_e0 = a1[0x12] + 3;
            break;

        case 7:
            bVar5 = *(int8_t*)(a1[0x12]+a1[0x15]+1) & 0xf0;
            if(bVar5 == 0x20)
            {
                if(a1[0x14] - a1[0x12] < 4)
                    return 1;
                l_e0 = a1[0x12] + 4;
            }
            else{
                if(bVar5 < 0x21)
                {
                    if(bVar5 != 0x10)
                        return 1
                    
                    if(a1[0x14] - a1[0x12] < 3)
                        return 1;
                    l_e0 = a1[0x12] + 3;
                }
                else {
                    if(bVar5 == 0x30)
                    {
                        if(a1[0x14] - a1[0x12] < 6)
                            return 1;
                        l_e0 = a1[0x12] + 6;
                    }
                    else {
                        if(bVar5 != 0x40)
                            return 1;
                        
                        if(a1[0x14] - a1[0x12] < 10)
                            return 1;
                        l_e0 = a1[0x12] + 10;
                    }
                }
            }
            break;

        case 8:
            if(*(int8_t*)(a1[0x12]+a1[0x15]) == 0x20)
                l_e0 = a1[0x12] + 2;
            else{
                if(a1[0x14] - a1[0x12] < 10)
                    return 1;
                l_e0 = a1[0x12] + 10;
            }
            break;

        case 9:
            if(*(int8_t*)(a1[0x12]+a1[0x15]+1) != 0x20 && a1[0x14] - a1[0x12] < 2)
                return 1;

        case 10:
            if(a1[0x14] - a1[0x12] < 2)
                return 1;
            l_e0 = a1[0x12] + 2;
            break;
        
        default:
            return 1;
    }

    switch(*(int8_t*)(a1[0x12]+a1[0x15]))
    {
        case 0:
            return 1;
            break;
        case 1: // MOV
            switch(*(int8_t*)(a[0x12]+1+a[0x15]) & 0xf)
            {   
                // 寄存器之间 mov
                // mov reg_a_idx, reg_b_idx
                case 0:
                    // 可能 0x11 就是常数+寄存器 a[0] - a[0x11]
                    if(0x11 < *(int8_t*)(a[0x12]+2) || 0x11 < *(int8_t*)(a[0x12]+3))
                        return 1;

                    bVar5 = *(int8_t *)(a[0x12] + 1 + a[0x15]) & 0xf0;
                    // mov 2
                    if (bVar5 == 0x20) {
                        a[*(int8_t *)(a[0x12] + 2 + a[0x15])] = a[(*(int8_t *)(a[0x12] + 3 + a[0x15])] & 0xffff;
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10) {
                                // mov 0xff
                                param_1[*(int8_t *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    param_1[*(int8_t *)(param_1[0x12] + 3 + param_1[0x15])] & 0xff;
                            }
                            else {
                                if (bVar5 == 0x30) {
                                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffffff;
                                }
                                else {
                                    if (bVar5 != 0x40) goto LAB_00101625;
                                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                                }
                        }
                    break;

                // mov regs_idx, data_offset
                case 1:
                    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
                       return 1;
                    }
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x16] - 2U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                            return 1;

                        // 0xffff
                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                            (ulong)*(ushort *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10)
                                return 1;
                            if (param_1[0x16] - 1U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
                                uVar8 = 1;
                                goto LAB_001119bd;
                            }
                            
                            // 0xff
                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                (ulong)*(byte *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
                        }
                        else {
                        if (bVar5 == 0x30) {
                            if (param_1[0x16] - 4U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                                return 1;

                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                (ulong)*(uint *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
                        }
                        else {
                            if (bVar5 != 0x40) 
                                return 1;
                            if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                                return 1;
                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                *(long *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
                        }
                        }
                    }
                    break;

                // mov data_offset, regs
                case 2:
                    if (0x11 < *(byte *)(param_1[0x12] + 8 + param_1[0x15])) 
                        return 1;
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x16] - 2U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15]))
                            return 1;
                        *(undefined2 *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10) 
                                return 1;
                            if (param_1[0x16] - 1U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
                                return 1;
                            *(undefined *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                                (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                        }
                        else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x16] - 4U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
                                    return 1;
                                *(undefined4 *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                                    (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                            }
                            else {
                                if (bVar5 != 0x40) 
                                    return 1;
                                if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
                                    return 1;
                                *(long *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                            }
                        }
                    }
                    break;
                
                // mov regs, stack[offset]
                // a[0x19] stack
                case 3:
                    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) 
                        return 1;

                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x18] - 2U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                            return 1;
                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                            (ulong)*(ushort *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10) 
                                return 1;
                            if (param_1[0x18] - 1U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                                return 1;

                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                (ulong)*(byte *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
                        }
                        else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x18] - 4U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    (ulong)*(uint *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
                            }
                            else {
                                if (bVar5 != 0x40)
                                    return 1;
                                if (param_1[0x18] - 8U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) 
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    *(long *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
                        }
                        }
                    }
                    break;
                
                // mov stack[offset], regs
                case 4:
                    if (0x11 < *(byte *)(param_1[0x12] + 8 + param_1[0x15])) 
                        return 1;
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x18] - 2U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
                            return 1;
                        *(undefined2 *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10)  
                                return 1;
                            if (param_1[0x18] - 1U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
                                return 1;
                            *(undefined *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                                (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                            }
                            else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x18] - 4U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15]))     
                                    return 1;
                                *(undefined4 *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                                    (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                            }
                            else {
                                if (bVar5 != 0x40) 
                                    return 1;
                                if (param_1[0x18] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
                                    return 1;
                                *(long *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
                            }
                        }
                    }
                    break;

                // mov regs, imm
                case 5:
                    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) 
                        return 1;
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                            (ulong)*(ushort *)(param_1[0x12] + 3 + param_1[0x15]);
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10)  
                                return 1;
                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                (ulong)*(byte *)(param_1[0x12] + 3 + param_1[0x15]);
                            }
                            else {
                            if (bVar5 == 0x30) {
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    (ulong)*(uint *)(param_1[0x12] + 3 + param_1[0x15]);
                            }
                            else {
                                if (bVar5 != 0x40)
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    *(long *)(param_1[0x12] + 3 + param_1[0x15]);
                            }
                        }
                    }
                    break;
                
                // mov data[regs], regs
                case 0xb:
                    if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
                        (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15])))
                            return 1;
                    
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                            if (param_1[0x16] - 2U <
                                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
                                return 1;

                        *(undefined2 *)
                        (param_1[0x17] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10)  
                                return 1;
                            if (param_1[0x16] - 1U <
                                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                                return 1;
                            *(undefined *)
                            (param_1[0x17] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                                (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                        }
                        else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x16] - 4U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                                    return 1;
                                *(undefined4 *)
                                (param_1[0x17] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                                    (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                            }
                            else {
                                if (bVar5 != 0x40)
                                    return 1;
                                if (param_1[0x16] - 8U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                                    return 1;
                                *(long *)(param_1[0x17] +
                                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                            }
                        }
                    }
                    break;

                    // mov regs_a, data[regs_b]
                    case 0xc:
                        if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
                        (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) 
                            return 1;
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x16] - 2U <
                            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) 
                            return 1;
                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                            (ulong)*(ushort *)
                                    (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                    param_1[0x17]);
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10) 
                                return 1;
                            if (param_1[0x16] - 1U <
                                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) 
                                return 1;
                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                (ulong)*(byte *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                                param_1[0x17]);
                            }
                        else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x16] - 4U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])])
                                    return 1;
                                
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    (ulong)*(uint *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                                    param_1[0x17]);
                            }
                            else {
                                if (bVar5 != 0x40)
                                    return 1;
                                if (param_1[0x16] - 8U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) 
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    *(long *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                            param_1[0x17]);
                            }
                        }
                    }
                    break;

                // mov stack[regs], regs
                case 0xd:
                    if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
                        (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) 
                        return 1;
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x18] - 2U <
                            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                            return 1;
                        *(undefined2 *)
                        (param_1[0x19] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10)
                                return 1;
                            if (param_1[0x18] - 1U <
                                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                                return 1;
                            *(undefined *)
                            (param_1[0x19] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                                (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                            }
                        else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x18] - 4U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] =
                                    (ulong)*(uint *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] +
                                                    param_1[0x19]);
                            }
                            else {
                                if (bVar5 != 0x40)
                                    return 1;
                                if (param_1[0x18] - 8U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) 
                                    return 1;
                                *(long *)(param_1[0x19] +
                                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                            }
                        }
                    }
                    break;

                // mov regs, stack[regs]
                case 0xe:
                    if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
                        (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15])))
                        return 1;
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
                    if (bVar5 == 0x20) {
                        if (param_1[0x18] - 2U <
                            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) 
                            return 1;
                        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                            (ulong)*(ushort *)
                                    (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                    param_1[0x19]);
                    }
                    else {
                        if (bVar5 < 0x21) {
                            if (bVar5 != 0x10) 
                                return 1;
                            if (param_1[0x18] - 1U <
                                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) 
                                return 1;
                            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                (ulong)*(byte *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                                param_1[0x19]);
                        }
                        else {
                            if (bVar5 == 0x30) {
                                if (param_1[0x18] - 4U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])])
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    (ulong)*(uint *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                                    param_1[0x19]);
                            }
                            else {
                                if (bVar5 != 0x40)
                                    return 1;
                                if (param_1[0x18] - 8U <
                                    (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) 
                                    return 1;
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                                    *(long *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                            param_1[0x19]);
                            }
                        }
                    }
                    break;
                default:
                    return 1;
            }
        case 2: // ADD
        case 3: // SUB
        case 4: // MUL
        case 5: // DIV
        case 6: // MOD
        case 7: // XOR
        case 8: // OR

        case

    }

}