case 0x12:
    // op[1] & 0xf
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
        if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
            (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) 
            return 1;
        
        // op[1] & 0xf0
        bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;

        // op[1] == 0x20
        if (bVar5 == 0x20) {
            // 0x8000 是符号位
            uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000;
            lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) <
                (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffU)) {
                param_1[0x13] = param_1[0x13] | 8;
            }
            else {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            uVar11 = ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffff) -
                        ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffff);
            if ((uVar6 == ((uint)lVar4 & 0x8000)) || ((uVar11 & 0x8000) == uVar6)) {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            else {
                param_1[0x13] = param_1[0x13] | 1;
            }
            if ((uVar11 & 0x8000) == 0) {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
                param_1[0x13] = param_1[0x13] | 2;
            }
            if ((uVar11 & 0xffff) == 0) {
                param_1[0x13] = param_1[0x13] | 4;
            }
            else {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
        }
        else {
            if (bVar5 < 0x21) {
                // op[1] == 0x10
                if (bVar5 != 0x10) 
                    return 1;

                uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80;
                lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];

                if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) <
                    (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffU)) {
                    param_1[0x13] = param_1[0x13] | 8;
                }
                else {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
                }

                uVar11 = ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xff) -
                        ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xff);

                if ((uVar6 == ((uint)lVar4 & 0x80)) || ((uVar11 & 0x80) == uVar6)) {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
                }
                else {
                    param_1[0x13] = param_1[0x13] | 1;
                }
                if ((uVar11 & 0x80) == 0) {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
                }
                else {
                    param_1[0x13] = param_1[0x13] | 2;
                }
                if ((uVar11 & 0xff) == 0) {
                    param_1[0x13] = param_1[0x13] | 4;
                }
                else {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
                }
            }
            else {
                // op[1] == 0x30
                if (bVar5 == 0x30) {
                uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                        0x80000000;
                lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) <
                    (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffffffU)) {
                    param_1[0x13] = param_1[0x13] | 8;
                }
                else {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
                }
                uVar11 = (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] -
                            (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                if ((uVar6 == ((uint)lVar4 & 0x80000000)) || ((uVar11 & 0x80000000) == uVar6)) {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
                }
                else {
                    param_1[0x13] = param_1[0x13] | 1;
                }
                if ((uVar11 & 0x80000000) == 0) {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
                }
                else {
                    param_1[0x13] = param_1[0x13] | 2;
                }
                if (uVar11 == 0) {
                    param_1[0x13] = param_1[0x13] | 4;
                }
                else {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
                }
                }
                else {
                    // op[1] == 0x40
                    if (bVar5 != 0x40) 
                        retur 1;
                    uVar2 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
                    uVar3 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                    if ((ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                        (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
                        param_1[0x13] = param_1[0x13] | 8;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
                    }
                    uVar12 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] -
                                param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
                    if (((uVar2 & 0x8000000000000000) == (uVar3 & 0x8000000000000000)) ||
                        ((uVar12 & 0x8000000000000000) == (uVar2 & 0x8000000000000000))) {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] | 1;
                    }
                    if ((long)uVar12 < 0) {
                        param_1[0x13] = param_1[0x13] | 2;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
                    }
                    if (uVar12 == 0) {
                        param_1[0x13] = param_1[0x13] | 4;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
                    }
                }
            }
        }
    }
    else {
        // op[1] & 0xf == 0x5
        if ((bVar5 & 0xf) != 5) 
            return 1;
        if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) 
            return 1;
        
        bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;

        // op[1] == 0x25
        if (bVar5 == 0x20) {
            uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000;
            uVar1 = *(ushort *)(param_1[0x12] + 3 + param_1[0x15]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) <
                (ulong)*(ushort *)(param_1[0x12] + 3 + param_1[0x15])) {
                param_1[0x13] = param_1[0x13] | 8;
            }
            else {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            uVar11 = ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffff) -
                        (uint)*(ushort *)(param_1[0x12] + 3 + param_1[0x15]);
            if ((uVar6 == ((uint)uVar1 & 0x8000)) || ((uVar11 & 0x8000) == uVar6)) {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            else {
                param_1[0x13] = param_1[0x13] | 1;
            }
            if ((uVar11 & 0x8000) == 0) {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
                param_1[0x13] = param_1[0x13] | 2;
            }
            if ((uVar11 & 0xffff) == 0) {
                param_1[0x13] = param_1[0x13] | 4;
            }
            else {
                param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
        }
        else {
            if (bVar5 < 0x21) {
                // op[1] == 0x15
                if (bVar5 != 0x10) 
                    return 1;
                uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80;
                bVar5 = *(byte *)(param_1[0x12] + 3 + param_1[0x15]);
                if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) <
                    (ulong)*(byte *)(param_1[0x12] + 3 + param_1[0x15])) {
                    param_1[0x13] = param_1[0x13] | 8;
                }
                else {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
                }
                uVar11 = ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xff) -
                        (uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15]);
                if ((uVar6 == ((uint)bVar5 & 0x80)) || ((uVar11 & 0x80) == uVar6)) {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
                }
                else {
                    param_1[0x13] = param_1[0x13] | 1;
                }
                if ((uVar11 & 0x80) == 0) {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
                }
                else {
                    param_1[0x13] = param_1[0x13] | 2;
                }
                if ((uVar11 & 0xff) == 0) {
                    param_1[0x13] = param_1[0x13] | 4;
                }
                else {
                    param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
                }
            }
            else {
                // op[1] == 0x35
                if (bVar5 == 0x30) {
                    uVar11 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                                0x80000000;
                    uVar6 = *(uint *)(param_1[0x12] + 3 + param_1[0x15]);
                    if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) <
                        (ulong)*(uint *)(param_1[0x12] + 3 + param_1[0x15])) {
                        param_1[0x13] = param_1[0x13] | 8;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
                    }
                    uVar10 = (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] -
                                *(int *)(param_1[0x12] + 3 + param_1[0x15]);
                    if ((uVar11 == (uVar6 & 0x80000000)) || ((uVar10 & 0x80000000) == uVar11)) {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] | 1;
                    }
                    if ((uVar10 & 0x80000000) == 0) {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] | 2;
                    }
                    if (uVar10 == 0) {
                        param_1[0x13] = param_1[0x13] | 4;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
                    }
                }
                else {
                    // op[1] == 0x45
                    if (bVar5 != 0x40) 
                        return 1;
                    uVar2 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
                    uVar3 = *(ulong *)(param_1[0x12] + 3 + param_1[0x15]);
                    if ((ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                        *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
                        param_1[0x13] = param_1[0x13] | 8;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
                    }
                    uVar12 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] -
                                *(long *)(param_1[0x12] + 3 + param_1[0x15]);
                    if (((uVar2 & 0x8000000000000000) == (uVar3 & 0x8000000000000000)) ||
                        ((uVar12 & 0x8000000000000000) == (uVar2 & 0x8000000000000000))) {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] | 1;
                    }
                    if ((long)uVar12 < 0) {
                        param_1[0x13] = param_1[0x13] | 2;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
                    }
                    if (uVar12 == 0) {
                        param_1[0x13] = param_1[0x13] | 4;
                    }
                    else {
                        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
                    }
                }
            }
        }
    }
    break;