case 0x20:
    lVar4 = *param_1;
    if (lVar4 == 1) {
        local_d8 = &DAT_00313010;
        while ((local_d8 != (int *)0x0 && (*local_d8 != (int)param_1[1]))) {
            local_d8 = *(int **)(local_d8 + 4);
        }
        if (local_d8 != (int *)0x0) {
            bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf;
            if (bVar5 == 8) {
                if ((ulong)(param_1[0x16] - param_1[2]) < (ulong)param_1[3]) 
                    return 1;

                sVar9 = read(*local_d8,(void *)(param_1[0x17] + param_1[2]),param_1[3]);
                *param_1 = sVar9;
            }
            else {
                if (bVar5 != 9) 
                    return 1;
                if ((ulong)(param_1[0x18] - param_1[2]) < (ulong)param_1[3])
                    return 1;
                sVar9 = read(*local_d8,(void *)(param_1[0x19] + param_1[2]),param_1[3]);
                *param_1 = sVar9;
            }
        }
    }
    else {
        if (lVar4 == 0) {
            if (*(char *)(param_1[0x12] + 1 + param_1[0x15]) != '\n') 
                return 1;
            iVar7 = FUN_00111f20(param_1[0x17] + param_1[1],local_a8,param_1[0x17] + param_1[1]);
            if (iVar7 < 0) 
                return 1;
            iVar7 = open((char *)(param_1[1] + param_1[0x17]),(int)param_1[2]);
            if (iVar7 < 0) {
                *param_1 = -1;
            }
            else {
                local_d0 = &DAT_00313010;
                while (*(long *)(local_d0 + 4) != 0) {
                    local_d0 = *(int **)(local_d0 + 4);
                }
                __ptr = calloc(0x18,1);
                *(void **)(local_d0 + 4) = __ptr;
                *(undefined8 *)(*(long *)(local_d0 + 4) + 0x10) = 0;
                *(long *)(*(long *)(local_d0 + 4) + 8) = param_1[1] + param_1[0x17];
                *local_d0 = iVar7;
                *param_1 = (long)iVar7;
            }
        }
        else {
            if (lVar4 == 2) {
                local_d8 = &DAT_00313010;
                while ((local_d8 != (int *)0x0 && (*local_d8 != (int)param_1[1]))) {
                    local_d8 = *(int **)(local_d8 + 4);
                }
                if (local_d8 != (int *)0x0) {
                    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf;
                    if (bVar5 == 8) {
                        if ((ulong)(param_1[0x16] - param_1[2]) < (ulong)param_1[3]) 
                            return 1;
                        sVar9 = write(*local_d8,(void *)(param_1[0x17] + param_1[2]),param_1[3]);
                        *param_1 = sVar9;
                    }
                    else {
                        if (bVar5 != 9) 
                            return 1;
                        if ((ulong)(param_1[0x18] - param_1[2]) < (ulong)param_1[3]) 
                            return 1;
                        sVar9 = write(*local_d8,(void *)(param_1[0x19] + param_1[2]),param_1[3]);
                        *param_1 = sVar9;
                    }
                }
            }
            else {
                if (lVar4 != 3) 
                    return 1;
                local_d8 = &DAT_00313010;
                while ((*(long *)(local_d8 + 4) != 0 && (**(int **)(local_d8 + 4) != (int)param_1[1]))) {
                    local_d8 = *(int **)(local_d8 + 4);
                }
                if (*(long *)(local_d8 + 4) == 0) {
                    *param_1 = -1;
                }
                else {
                    __ptr = *(void **)(local_d8 + 4);
                    *(undefined8 *)(local_d8 + 4) = *(undefined8 *)((long)__ptr + 0x10);
                    free(__ptr);
                    *param_1 = 0;
                }
            }
        }
    }