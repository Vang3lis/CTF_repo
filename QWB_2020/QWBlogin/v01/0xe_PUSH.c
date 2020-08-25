case 0xe:
    if (param_1[0x10] == 0) 
        return 1;
    if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) != 6)
        return 1;
    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) 
        return 1;
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
        if ((ulong)param_1[0x10] < 2)
            return 1;
        *(undefined2 *)(param_1[0x19] + param_1[0x10] + -2) =
            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
        param_1[0x10] = param_1[0x10] + -2;
    }
    else {
        if (bVar5 < 0x21) {
            if (bVar5 != 0x10) 
                return 1;
            if (param_1[0x10] == 0) 
                return 1;
            *(undefined *)(param_1[0x19] + param_1[0x10] + -1) =
                (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
            param_1[0x10] = param_1[0x10] + -1;
        }
        else {
            if (bVar5 == 0x30) {
                if ((ulong)param_1[0x10] < 4) 
                    return 1;
                *(undefined4 *)(param_1[0x19] + param_1[0x10] + -4) =
                    (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
                param_1[0x10] = param_1[0x10] + -4;
            }
            else {
                if (bVar5 != 0x40)
                    return 1;
                if ((ulong)param_1[0x10] < 8) 
                    return 1;
                *(long *)(param_1[0x19] + param_1[0x10] + -8) =
                    param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
                param_1[0x10] = param_1[0x10] + -8;
            }
        }
    }
    break;