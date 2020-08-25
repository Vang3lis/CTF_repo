handle_jump:

bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf;

if (bVar5 == 7) {
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
        if (param_1[0x14] - 2U < *(ushort *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) 
            return 1
        local_e0 = local_e0 + *(ushort *)(param_1[0x12] + 2 + param_1[0x15]);
    }
    else {
        if (bVar5 < 0x21) {
            if (bVar5 == 0x10) {
                if (*(char *)(param_1[0x12] + 2 + param_1[0x15]) < '\0') {
                    bVar5 = -*(char *)(param_1[0x12] + 2 + param_1[0x15]);
                    if (local_e0 < bVar5)
                        return 1;
                    local_e0 = local_e0 - bVar5;
                }
                else {
                    if (param_1[0x14] - 2U < *(byte *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) 
                        return 1;
                    local_e0 = local_e0 + *(byte *)(param_1[0x12] + 2 + param_1[0x15]);
                }
            }
        }
        else {
            if (bVar5 == 0x30) {
                if (param_1[0x14] - 2U < *(uint *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) 
                    return 1;
                local_e0 = local_e0 + *(uint *)(param_1[0x12] + 2 + param_1[0x15]);
            }
            else {
                if (bVar5 == 0x40) {
                    if (param_1[0x14] - 2U < *(long *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) 
                        return 1;
                    local_e0 = local_e0 + *(long *)(param_1[0x12] + 2 + param_1[0x15]);
                }
            }
        }
    }
}
else {
    if (bVar5 == 8) {
        if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0) != 0x40) 
            return 1;
        if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) 
            return 1;
        local_e0 = *(ulong *)(*(long *)(param_1[0x12] + 2 + param_1[0x15]) + param_1[0x17]);
    }
    else {
        if (bVar5 != 6) 
            return 1;
        if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) 
            return 1;
        if (param_1[(int)(uint)(param_1[0x14] - 2U < (ulong)*(byte *)(param_1[0x12] + 2 + param_1[0x15]))] != 0) 
            return 1;
        local_e0 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
    }
}
break;