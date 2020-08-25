
/* WARNING: Removing unreachable block (ram,0x0010eed0) */
/* WARNING: Removing unreachable block (ram,0x0010ef0e) */
/* WARNING: Removing unreachable block (ram,0x0010ef18) */
/* WARNING: Removing unreachable block (ram,0x00110e9e) */
/* WARNING: Removing unreachable block (ram,0x00110edc) */
/* WARNING: Removing unreachable block (ram,0x00110ee6) */

undefined8 FUN_00100c1a(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  void *__ptr;
  ssize_t sVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  ulong local_e0;
  int *local_d8;
  int *local_d0;
  undefined local_a8 [152];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0x14] - 2U < (ulong)param_1[0x12]) {
    uVar8 = 1;
    goto LAB_001119bd;
  }
  switch((uint)*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) {
  case 0:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if ((ulong)(param_1[0x14] - param_1[0x12]) < 4) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    local_e0 = param_1[0x12] + 4;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    if (param_1[0x14] - 0xbU < (ulong)param_1[0x12]) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    local_e0 = param_1[0x12] + 0xb;
    break;
  case 5:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
      if (param_1[0x14] - 5U < (ulong)param_1[0x12]) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      local_e0 = param_1[0x12] + 5;
    }
    else {
      if (bVar5 < 0x21) {
        if (bVar5 != 0x10) {
LAB_00100f12:
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[0x14] - 4U < (ulong)param_1[0x12]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        local_e0 = param_1[0x12] + 4;
      }
      else {
        if (bVar5 == 0x30) {
          if (param_1[0x14] - 7U < (ulong)param_1[0x12]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          local_e0 = param_1[0x12] + 7;
        }
        else {
          if (bVar5 != 0x40) goto LAB_00100f12;
          if (param_1[0x14] - 0xbU < (ulong)param_1[0x12]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          local_e0 = param_1[0x12] + 0xb;
        }
      }
    }
    break;
  case 6:
    if (param_1[0x14] - 3U < (ulong)param_1[0x12]) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    local_e0 = param_1[0x12] + 3;
    break;
  case 7:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
      if (param_1[0x14] - 4U < (ulong)param_1[0x12]) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      local_e0 = param_1[0x12] + 4;
    }
    else {
      if (bVar5 < 0x21) {
        if (bVar5 != 0x10) {
LAB_001010f5:
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[0x14] - 3U < (ulong)param_1[0x12]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        local_e0 = param_1[0x12] + 3;
      }
      else {
        if (bVar5 == 0x30) {
          if (param_1[0x14] - 6U < (ulong)param_1[0x12]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          local_e0 = param_1[0x12] + 6;
        }
        else {
          if (bVar5 != 0x40) goto LAB_001010f5;
          if (param_1[0x14] - 10U < (ulong)param_1[0x12]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          local_e0 = param_1[0x12] + 10;
        }
      }
    }
    break;
  case 8:
    if (*(char *)(param_1[0x12] + param_1[0x15]) == ' ') {
      local_e0 = param_1[0x12] + 2;
    }
    else {
      if (param_1[0x14] - 10U < (ulong)param_1[0x12]) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      local_e0 = param_1[0x12] + 10;
    }
    break;
  case 9:
    if ((*(char *)(param_1[0x12] + param_1[0x15]) != ' ') &&
       (param_1[0x14] - 10U < (ulong)param_1[0x12])) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
  case 10:
    if (param_1[0x14] - 2U < (ulong)param_1[0x12]) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    local_e0 = param_1[0x12] + 2;
    break;
  default:
    uVar8 = 1;
    goto LAB_001119bd;
  }
  switch(*(undefined *)(param_1[0x12] + param_1[0x15])) {
  case 0:
    if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) == 10) {
      if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0) == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 1;
    }
    goto LAB_001119bd;
  case 1:
    switch((uint)*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) {
    case 0:
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffff;
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00101625:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xff;
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
      }
      break;
    case 1:
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x16] - 2U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)*(ushort *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001019bd:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x16] - 1U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)*(byte *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x16] - 4U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)*(uint *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_001019bd;
            if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 *(long *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x17]);
          }
        }
      }
      break;
    case 2:
      if (0x11 < *(byte *)(param_1[0x12] + 8 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x16] - 2U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        *(undefined2 *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
             (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00101d50:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x16] - 1U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(undefined *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
               (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x16] - 4U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(undefined4 *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                 (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
          }
          else {
            if (bVar5 != 0x40) goto LAB_00101d50;
            if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(long *)(param_1[0x17] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
          }
        }
      }
      break;
    case 3:
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x18] - 2U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)*(ushort *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001020e8:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x18] - 1U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)*(byte *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x18] - 4U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)*(uint *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_001020e8;
            if (param_1[0x18] - 8U < *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 *(long *)(*(long *)(param_1[0x12] + 3 + param_1[0x15]) + param_1[0x19]);
          }
        }
      }
      break;
    case 4:
      if (0x11 < *(byte *)(param_1[0x12] + 8 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x18] - 2U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        *(undefined2 *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
             (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010247b:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x18] - 1U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(undefined *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
               (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x18] - 4U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(undefined4 *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                 (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010247b;
            if (param_1[0x18] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(long *)(param_1[0x19] + *(long *)(param_1[0x12] + 2 + param_1[0x15])) =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 10 + param_1[0x15])];
          }
        }
      }
      break;
    case 5:
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)*(ushort *)(param_1[0x12] + 3 + param_1[0x15]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001026a4:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)*(byte *)(param_1[0x12] + 3 + param_1[0x15]);
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)*(uint *)(param_1[0x12] + 3 + param_1[0x15]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_001026a4;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 *(long *)(param_1[0x12] + 3 + param_1[0x15]);
          }
        }
      }
      break;
    default:
      uVar8 = 1;
      goto LAB_001119bd;
    case 0xb:
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x16] - 2U <
            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        *(undefined2 *)
         (param_1[0x17] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
             (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00102f2f:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x16] - 1U <
              (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(undefined *)
           (param_1[0x17] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
               (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x16] - 4U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(undefined4 *)
             (param_1[0x17] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                 (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          }
          else {
            if (bVar5 != 0x40) goto LAB_00102f2f;
            if (param_1[0x16] - 8U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(long *)(param_1[0x17] +
                     param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          }
        }
      }
      break;
    case 0xc:
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x16] - 2U <
            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)*(ushort *)
                     (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                     param_1[0x17]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00102aee:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x16] - 1U <
              (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)*(byte *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                               param_1[0x17]);
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x16] - 4U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)*(uint *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                 param_1[0x17]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_00102aee;
            if (param_1[0x16] - 8U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 *(long *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                          param_1[0x17]);
          }
        }
      }
      break;
    case 0xd:
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x18] - 2U <
            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        *(undefined2 *)
         (param_1[0x19] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
             (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001037bc:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x18] - 1U <
              (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(undefined *)
           (param_1[0x19] + param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
               (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x18] - 4U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] =
                 (ulong)*(uint *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] +
                                 param_1[0x19]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_001037bc;
            if (param_1[0x18] - 8U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(long *)(param_1[0x19] +
                     param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          }
        }
      }
      break;
    case 0xe:
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x18] - 2U <
            (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)*(ushort *)
                     (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                     param_1[0x19]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00103379:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x18] - 1U <
              (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)*(byte *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                               param_1[0x19]);
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x18] - 4U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)*(uint *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                                 param_1[0x19]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_00103379;
            if (param_1[0x18] - 8U <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 *(long *)(param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] +
                          param_1[0x19]);
          }
        }
      }
    }
    break;
  case 2:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000;
        lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
        if ((ulong)(ushort)~(ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
            < (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffU)) {
          param_1[0x13] = param_1[0x13] | 8;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            + (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ]);
        if ((uVar6 == ((uint)lVar4 & 0x8000)) &&
           (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000) !=
            uVar6)) {
          param_1[0x13] = param_1[0x13] | 1;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00104775:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80;
          lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          if ((ulong)(byte)~(byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
              (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffU)) {
            param_1[0x13] = param_1[0x13] | 8;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            + (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
          if ((uVar6 == ((uint)lVar4 & 0x80)) &&
             (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80) !=
              uVar6)) {
            param_1[0x13] = param_1[0x13] | 1;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
        }
        else {
          if (bVar5 == 0x30) {
            uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                    0x80000000;
            lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if ((ulong)~(uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffffffU)) {
              param_1[0x13] = param_1[0x13] | 8;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                              + (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ]);
            if ((uVar6 == ((uint)lVar4 & 0x80000000)) &&
               (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000
                ) != uVar6)) {
              param_1[0x13] = param_1[0x13] | 1;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_00104775;
            uVar2 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
            uVar3 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if ((ulong)~param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
              param_1[0x13] = param_1[0x13] | 8;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] +
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if (((uVar2 & 0x8000000000000000) == (uVar3 & 0x8000000000000000)) &&
               ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                0x8000000000000000U) != (uVar2 & 0x8000000000000000))) {
              param_1[0x13] = param_1[0x13] | 1;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
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
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000;
        uVar1 = *(ushort *)(param_1[0x12] + 2 + param_1[0x15]);
        if ((ushort)~(ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
            *(ushort *)(param_1[0x12] + 3 + param_1[0x15])) {
          param_1[0x13] = param_1[0x13] | 8;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)(*(short *)(param_1[0x12] + 3 + param_1[0x15]) +
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
        ;
        if ((uVar6 == ((uint)uVar1 & 0x8000)) &&
           (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000) !=
            uVar6)) {
          param_1[0x13] = param_1[0x13] | 1;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010557c:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80;
          bVar5 = *(byte *)(param_1[0x12] + 3 + param_1[0x15]);
          if ((byte)~(byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
              *(byte *)(param_1[0x12] + 3 + param_1[0x15])) {
            param_1[0x13] = param_1[0x13] | 8;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            + (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
          if ((uVar6 == ((uint)bVar5 & 0x80)) &&
             (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80) !=
              uVar6)) {
            param_1[0x13] = param_1[0x13] | 1;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
        }
        else {
          if (bVar5 == 0x30) {
            uVar6 = *(uint *)(param_1[0x12] + 2 + param_1[0x15]);
            if (~(uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                *(uint *)(param_1[0x12] + 3 + param_1[0x15])) {
              param_1[0x13] = param_1[0x13] | 8;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)(*(int *)(param_1[0x12] + 3 + param_1[0x15]) +
                              (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
            ;
            if (((uVar6 & 0x80000000) == 0) &&
               ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) !=
                0)) {
              param_1[0x13] = param_1[0x13] | 1;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010557c;
            uVar2 = *(ulong *)(param_1[0x12] + 2 + param_1[0x15]);
            if ((ulong)~param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
              param_1[0x13] = param_1[0x13] | 8;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] +
                 *(long *)(param_1[0x12] + 3 + param_1[0x15]);
            if (((uVar2 & 0x8000000000000000) == 0) &&
               ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                0x8000000000000000U) != 0)) {
              param_1[0x13] = param_1[0x13] | 1;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
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
  case 3:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000;
        lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) <
            (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffU)) {
          param_1[0x13] = param_1[0x13] | 8;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                     0xffff) - ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15]
                                                                  )] & 0xffff) & 0xffff);
        if ((uVar6 == ((uint)lVar4 & 0x8000)) ||
           (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000) ==
            uVar6)) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
        }
        else {
          param_1[0x13] = param_1[0x13] | 1;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010653e:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80;
          lVar4 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) <
              (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffU)) {
            param_1[0x13] = param_1[0x13] | 8;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                       0xff) - ((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15]
                                                                  )] & 0xff) & 0xff);
          if ((uVar6 == ((uint)lVar4 & 0x80)) ||
             (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80) ==
              uVar6)) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
          }
          else {
            param_1[0x13] = param_1[0x13] | 1;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
        }
        else {
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
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                              - (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])
                                            ]);
            if ((uVar6 == ((uint)lVar4 & 0x80000000)) ||
               (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000
                ) == uVar6)) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            else {
              param_1[0x13] = param_1[0x13] | 1;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010653e;
            uVar2 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
            uVar3 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if ((ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]) {
              param_1[0x13] = param_1[0x13] | 8;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] -
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if (((uVar2 & 0x8000000000000000) == (uVar3 & 0x8000000000000000)) ||
               ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                0x8000000000000000U) == (uVar2 & 0x8000000000000000))) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            else {
              param_1[0x13] = param_1[0x13] | 1;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
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
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
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
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                     0xffff) - (uint)*(ushort *)(param_1[0x12] + 3 + param_1[0x15]) & 0xffff);
        if ((uVar6 == ((uint)uVar1 & 0x8000)) ||
           (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000) ==
            uVar6)) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
        }
        else {
          param_1[0x13] = param_1[0x13] | 1;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001073c8:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          uVar6 = (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80;
          bVar5 = *(byte *)(param_1[0x12] + 3 + param_1[0x15]);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) <
              (ulong)*(byte *)(param_1[0x12] + 3 + param_1[0x15])) {
            param_1[0x13] = param_1[0x13] | 8;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                       0xff) - (uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15]) & 0xff);
          if ((uVar6 == ((uint)bVar5 & 0x80)) ||
             (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80) ==
              uVar6)) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
          }
          else {
            param_1[0x13] = param_1[0x13] | 1;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
        }
        else {
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
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                              - *(int *)(param_1[0x12] + 3 + param_1[0x15]));
            if ((uVar11 == (uVar6 & 0x80000000)) ||
               (((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000
                ) == uVar11)) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            else {
              param_1[0x13] = param_1[0x13] | 1;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_001073c8;
            uVar2 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
            uVar3 = *(ulong *)(param_1[0x12] + 3 + param_1[0x15]);
            if ((ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <
                *(ulong *)(param_1[0x12] + 3 + param_1[0x15])) {
              param_1[0x13] = param_1[0x13] | 8;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffff7;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] -
                 *(long *)(param_1[0x12] + 3 + param_1[0x15]);
            if (((uVar2 & 0x8000000000000000) == (uVar3 & 0x8000000000000000)) ||
               ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                0x8000000000000000U) == (uVar2 & 0x8000000000000000))) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffe;
            }
            else {
              param_1[0x13] = param_1[0x13] | 1;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
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
  case 4:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            * (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001077a8:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            * (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                              * (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_001077a8;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] *
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)(*(short *)(param_1[0x12] + 3 + param_1[0x15]) *
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
        ;
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00107ad2:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)(*(char *)(param_1[0x12] + 3 + param_1[0x15]) *
                            (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)(*(int *)(param_1[0x12] + 3 + param_1[0x15]) *
                              (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
            ;
          }
          else {
            if (bVar5 != 0x40) goto LAB_00107ad2;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] *
                 *(long *)(param_1[0x12] + 3 + param_1[0x15]);
          }
        }
      }
    }
    break;
  case 5:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if ((short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] == 0) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            * (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00107fc8:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if ((char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] == '\0') {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            * (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        }
        else {
          if (bVar5 == 0x30) {
            if ((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] == 0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                              * (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ]);
          }
          else {
            if (bVar5 != 0x40) goto LAB_00107fc8;
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] == 0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] *
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (*(short *)(param_1[0x12] + 3 + param_1[0x15]) == 0) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)(*(short *)(param_1[0x12] + 3 + param_1[0x15]) *
                            (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
        ;
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001083c3:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (*(char *)(param_1[0x12] + 3 + param_1[0x15]) == '\0') {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)(*(char *)(param_1[0x12] + 3 + param_1[0x15]) *
                            (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
        }
        else {
          if (bVar5 == 0x30) {
            if (*(int *)(param_1[0x12] + 3 + param_1[0x15]) == 0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)(*(int *)(param_1[0x12] + 3 + param_1[0x15]) *
                              (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])])
            ;
          }
          else {
            if (bVar5 != 0x40) goto LAB_001083c3;
            if (*(long *)(param_1[0x12] + 3 + param_1[0x15]) == 0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] *
                 *(long *)(param_1[0x12] + 3 + param_1[0x15]);
          }
        }
      }
    }
    break;
  case 6:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ] %
                            (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            );
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_001089db:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)(((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15]
                                                                  )] & 0xff) %
                            (ushort)(byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 +
                                                                      param_1[0x15])]);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) %
                 (param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0xffffffffU);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_001089db;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] %
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
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
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])
                                            ] % *(ushort *)(param_1[0x12] + 3 + param_1[0x15]));
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00108f34:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)(((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15]
                                                                  )] & 0xff) %
                            (ushort)*(byte *)(param_1[0x12] + 3 + param_1[0x15]));
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) %
                 (ulong)*(uint *)(param_1[0x12] + 3 + param_1[0x15]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_00108f34;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] %
                 *(ulong *)(param_1[0x12] + 3 + param_1[0x15]);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
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
  case 7:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])
                                            ] ^
                            (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00109744:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            ^ (byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] ^
                        (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_00109744;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] ^
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)(*(ushort *)(param_1[0x12] + 3 + param_1[0x15]) ^
                            (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_00109e9e:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)(*(byte *)(param_1[0x12] + 3 + param_1[0x15]) ^
                            (byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(*(uint *)(param_1[0x12] + 3 + param_1[0x15]) ^
                        (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_00109e9e;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] ^
                 *(ulong *)(param_1[0x12] + 3 + param_1[0x15]);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    break;
  case 8:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])
                                            ] |
                            (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010a6ae:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            | (byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] |
                        (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010a6ae;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] |
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)(*(ushort *)(param_1[0x12] + 3 + param_1[0x15]) |
                            (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010ae08:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)(*(byte *)(param_1[0x12] + 3 + param_1[0x15]) |
                            (byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(*(uint *)(param_1[0x12] + 3 + param_1[0x15]) |
                        (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010ae08;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] |
                 *(ulong *)(param_1[0x12] + 3 + param_1[0x15]);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    break;
  case 9:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(ushort)((ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])
                                            ] &
                            (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010b618:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(byte)((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])]
                            & (byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            );
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] &
                        (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010b618;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])];
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(*(ushort *)(param_1[0x12] + 3 + param_1[0x15]) &
                    (ushort)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010bd72:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(*(byte *)(param_1[0x12] + 3 + param_1[0x15]) &
                      (byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(*(uint *)(param_1[0x12] + 3 + param_1[0x15]) &
                        (uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]);
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010bd72;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                 *(ulong *)(param_1[0x12] + 3 + param_1[0x15]);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    break;
  case 10:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                     0xffff) <<
                     ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0x1f)
                    & 0xffff);
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010c59f:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                       0xff) << ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 +
                                                                   param_1[0x15])] & 0x1f) & 0xff);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                              << ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 +
                                                                    param_1[0x15])] & 0x1f));
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010c59f;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <<
                 ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0x3f);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                     0xffff) << ((byte)*(undefined2 *)(param_1[0x12] + 3 + param_1[0x15]) & 0x1f) &
                    0xffff);
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010cd13:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)(((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                       0xff) << (*(byte *)(param_1[0x12] + 3 + param_1[0x15]) & 0x1f) & 0xff);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)(uint)((int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                              << ((byte)*(undefined4 *)(param_1[0x12] + 3 + param_1[0x15]) & 0x1f));
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010cd13;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] <<
                 ((byte)*(undefined8 *)(param_1[0x12] + 3 + param_1[0x15]) & 0x3f);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    break;
  case 0xb:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)((int)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                          0xffff) >>
                     ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0x1f)
                    & 0xffff);
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010d540:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)((int)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            & 0xff) >>
                       ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] &
                       0x1f) & 0xff);
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] >>
                        ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] &
                        0x1f));
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010d540;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] >>
                 ((byte)param_1[(int)(uint)*(byte *)(param_1[0x12] + 3 + param_1[0x15])] & 0x3f);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    else {
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)((int)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                          0xffff) >>
                     ((byte)*(undefined2 *)(param_1[0x12] + 3 + param_1[0x15]) & 0x1f) & 0xffff);
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 != 0x10) {
LAB_0010dcb4:
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)((int)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]
                            & 0xff) >> (*(byte *)(param_1[0x12] + 3 + param_1[0x15]) & 0x1f) & 0xff)
          ;
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 == 0x30) {
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] >>
                        ((byte)*(undefined4 *)(param_1[0x12] + 3 + param_1[0x15]) & 0x1f));
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) ==
                0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) ==
                0) {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
            else {
              param_1[0x13] = param_1[0x13] | 2;
            }
          }
          else {
            if (bVar5 != 0x40) goto LAB_0010dcb4;
            param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
                 (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] >>
                 ((byte)*(undefined8 *)(param_1[0x12] + 3 + param_1[0x15]) & 0x3f);
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
              param_1[0x13] = param_1[0x13] | 4;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
            }
            if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
              param_1[0x13] = param_1[0x13] | 2;
            }
            else {
              param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
            }
          }
        }
      }
    }
    break;
  case 0xc:
    if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) != 6) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
      param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
           (long)(int)~((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                       0xffff);
      if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffU) == 0) {
        param_1[0x13] = param_1[0x13] | 4;
      }
      else {
        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
      }
      if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x8000U) == 0) {
        param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
      }
      else {
        param_1[0x13] = param_1[0x13] | 2;
      }
    }
    else {
      if (bVar5 < 0x21) {
        if (bVar5 != 0x10) {
LAB_0010e3b8:
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (long)(int)~((uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] &
                         0xff);
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffU) == 0) {
          param_1[0x13] = param_1[0x13] | 4;
        }
        else {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
        }
        if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80U) == 0) {
          param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
        }
        else {
          param_1[0x13] = param_1[0x13] | 2;
        }
      }
      else {
        if (bVar5 == 0x30) {
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)~(uint)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0xffffffffU) == 0)
          {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if ((param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] & 0x80000000U) == 0)
          {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
          else {
            param_1[0x13] = param_1[0x13] | 2;
          }
        }
        else {
          if (bVar5 != 0x40) goto LAB_0010e3b8;
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               ~param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
          if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] == 0) {
            param_1[0x13] = param_1[0x13] | 4;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffb;
          }
          if (param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] < 0) {
            param_1[0x13] = param_1[0x13] | 2;
          }
          else {
            param_1[0x13] = param_1[0x13] & 0xfffffffffffffffd;
          }
        }
      }
    }
    break;
  case 0xd:
    if ((ulong)param_1[0x18] <= (ulong)param_1[0x10]) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) != 6) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
      if (param_1[0x18] - 2U < (ulong)param_1[0x10]) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
           (ulong)*(ushort *)(param_1[0x10] + param_1[0x19]);
      param_1[0x10] = param_1[0x10] + 2;
    }
    else {
      if (bVar5 < 0x21) {
        if (bVar5 != 0x10) {
LAB_0010e77b:
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[0x18] - 1U < (ulong)param_1[0x10]) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
             (ulong)*(byte *)(param_1[0x10] + param_1[0x19]);
        param_1[0x10] = param_1[0x10] + 1;
      }
      else {
        if (bVar5 == 0x30) {
          if (param_1[0x18] - 4U < (ulong)param_1[0x10]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               (ulong)*(uint *)(param_1[0x10] + param_1[0x19]);
          param_1[0x10] = param_1[0x10] + 4;
        }
        else {
          if (bVar5 != 0x40) goto LAB_0010e77b;
          if (param_1[0x18] - 8U < (ulong)param_1[0x10]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])] =
               *(long *)(param_1[0x10] + param_1[0x19]);
          param_1[0x10] = param_1[0x10] + 8;
        }
      }
    }
    break;
  case 0xe:
    if (param_1[0x10] == 0) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf) != 6) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
      if ((ulong)param_1[0x10] < 2) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      *(undefined2 *)(param_1[0x19] + param_1[0x10] + -2) =
           (short)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
      param_1[0x10] = param_1[0x10] + -2;
    }
    else {
      if (bVar5 < 0x21) {
        if (bVar5 != 0x10) {
LAB_0010eaf6:
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[0x10] == 0) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        *(undefined *)(param_1[0x19] + param_1[0x10] + -1) =
             (char)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
        param_1[0x10] = param_1[0x10] + -1;
      }
      else {
        if (bVar5 == 0x30) {
          if ((ulong)param_1[0x10] < 4) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(undefined4 *)(param_1[0x19] + param_1[0x10] + -4) =
               (int)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
          param_1[0x10] = param_1[0x10] + -4;
        }
        else {
          if (bVar5 != 0x40) goto LAB_0010eaf6;
          if ((ulong)param_1[0x10] < 8) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(long *)(param_1[0x19] + param_1[0x10] + -8) =
               param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
          param_1[0x10] = param_1[0x10] + -8;
        }
      }
    }
    break;
  default:
    uVar8 = 1;
    goto LAB_001119bd;
  case 0x10:
    if ((ulong)param_1[0x10] < 8) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf;
    if (bVar5 != 7) {
      if (bVar5 == 8) {
        if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0) != 0x40) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
        param_1[0x10] = param_1[0x10] + -8;
      }
      else {
        if (bVar5 == 6) {
          if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if (param_1[0x14] - 2U <
              (ulong)param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])]) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
          param_1[0x10] = param_1[0x10] + -8;
          local_e0 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
          break;
        }
      }
      uVar8 = 1;
      goto LAB_001119bd;
    }
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
    if (bVar5 == 0x20) {
      if (param_1[0x14] - 2U < *(ushort *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
      param_1[0x10] = param_1[0x10] + -8;
      local_e0 = local_e0 + *(ushort *)(param_1[0x12] + 2 + param_1[0x15]);
    }
    else {
      if (bVar5 < 0x21) {
        if (bVar5 == 0x10) {
          if (*(char *)(param_1[0x12] + 2 + param_1[0x15]) < '\0') {
            bVar5 = -*(char *)(param_1[0x12] + 2 + param_1[0x15]);
            if (local_e0 < bVar5) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
            param_1[0x10] = param_1[0x10] + -8;
            local_e0 = local_e0 - bVar5;
          }
          else {
            if (param_1[0x14] - 2U < *(byte *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
            param_1[0x10] = param_1[0x10] + -8;
            local_e0 = local_e0 + *(byte *)(param_1[0x12] + 2 + param_1[0x15]);
          }
        }
      }
      else {
        if (bVar5 == 0x30) {
          if (param_1[0x14] - 2U < *(uint *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
          param_1[0x10] = param_1[0x10] + -8;
          local_e0 = local_e0 + *(uint *)(param_1[0x12] + 2 + param_1[0x15]);
        }
        else {
          if (bVar5 == 0x40) {
            if (param_1[0x14] - 2U < *(long *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            *(ulong *)(param_1[0x19] + param_1[0x10] + -8) = local_e0;
            param_1[0x10] = param_1[0x10] + -8;
            local_e0 = local_e0 + *(long *)(param_1[0x12] + 2 + param_1[0x15]);
          }
        }
      }
    }
    break;
  case 0x11:
    if (param_1[0x18] - 8U < (ulong)param_1[0x10]) {
      uVar8 = 1;
      goto LAB_001119bd;
    }
    local_e0 = *(ulong *)(param_1[0x10] + param_1[0x19]);
    param_1[0x10] = param_1[0x10] + 8;
    break;
  case 0x12:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]);
    if ((bVar5 & 0xf) == 0) {
      if ((0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) ||
         (0x11 < *(byte *)(param_1[0x12] + 3 + param_1[0x15]))) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
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
          if (bVar5 != 0x10) {
LAB_0011003e:
            uVar8 = 1;
            goto LAB_001119bd;
          }
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
            if (bVar5 != 0x40) goto LAB_0011003e;
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
      if ((bVar5 & 0xf) != 5) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
        uVar8 = 1;
        goto LAB_001119bd;
      }
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
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
          if (bVar5 != 0x10) {
LAB_00110bc7:
            uVar8 = 1;
            goto LAB_001119bd;
          }
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
            if (bVar5 != 0x40) goto LAB_00110bc7;
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
  case 0x13:
    goto switchD_001012c1_caseD_13;
  case 0x14:
    uVar2 = param_1[0x13] & 4;
    goto joined_r0x00111357;
  case 0x15:
    uVar2 = param_1[0x13] & 4;
    goto joined_r0x0011137a;
  case 0x16:
    if (((param_1[0x13] & 4U) == 0) && (((uint)param_1[0x13] & 2) >> 1 == ((uint)param_1[0x13] & 1))
       ) goto switchD_001012c1_caseD_13;
    break;
  case 0x17:
    if (((param_1[0x13] & 4U) != 0) || (((uint)param_1[0x13] & 2) >> 1 != ((uint)param_1[0x13] & 1))
       ) goto switchD_001012c1_caseD_13;
    break;
  case 0x18:
    if (((uint)param_1[0x13] & 2) >> 1 != ((uint)param_1[0x13] & 1)) goto switchD_001012c1_caseD_13;
    break;
  case 0x19:
    if (((uint)param_1[0x13] & 2) >> 1 == ((uint)param_1[0x13] & 1)) goto switchD_001012c1_caseD_13;
    break;
  case 0x1a:
    if ((param_1[0x13] & 8U) == 0) {
      uVar2 = param_1[0x13] & 4;
      goto joined_r0x0011137a;
    }
    break;
  case 0x1b:
    if ((param_1[0x13] & 8U) == 0) {
      uVar2 = param_1[0x13] & 4;
      goto joined_r0x00111357;
    }
switchD_001012c1_caseD_13:
    bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf;
    if (bVar5 == 7) {
      bVar5 = *(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0;
      if (bVar5 == 0x20) {
        if (param_1[0x14] - 2U < *(ushort *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        local_e0 = local_e0 + *(ushort *)(param_1[0x12] + 2 + param_1[0x15]);
      }
      else {
        if (bVar5 < 0x21) {
          if (bVar5 == 0x10) {
            if (*(char *)(param_1[0x12] + 2 + param_1[0x15]) < '\0') {
              bVar5 = -*(char *)(param_1[0x12] + 2 + param_1[0x15]);
              if (local_e0 < bVar5) {
                uVar8 = 1;
                goto LAB_001119bd;
              }
              local_e0 = local_e0 - bVar5;
            }
            else {
              if (param_1[0x14] - 2U < *(byte *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
                uVar8 = 1;
                goto LAB_001119bd;
              }
              local_e0 = local_e0 + *(byte *)(param_1[0x12] + 2 + param_1[0x15]);
            }
          }
        }
        else {
          if (bVar5 == 0x30) {
            if (param_1[0x14] - 2U < *(uint *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
              uVar8 = 1;
              goto LAB_001119bd;
            }
            local_e0 = local_e0 + *(uint *)(param_1[0x12] + 2 + param_1[0x15]);
          }
          else {
            if (bVar5 == 0x40) {
              if (param_1[0x14] - 2U < *(long *)(param_1[0x12] + 2 + param_1[0x15]) + local_e0) {
                uVar8 = 1;
                goto LAB_001119bd;
              }
              local_e0 = local_e0 + *(long *)(param_1[0x12] + 2 + param_1[0x15]);
            }
          }
        }
      }
    }
    else {
      if (bVar5 == 8) {
        if ((*(byte *)(param_1[0x12] + 1 + param_1[0x15]) & 0xf0) != 0x40) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[0x16] - 8U < *(ulong *)(param_1[0x12] + 2 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        local_e0 = *(ulong *)(*(long *)(param_1[0x12] + 2 + param_1[0x15]) + param_1[0x17]);
      }
      else {
        if (bVar5 != 6) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (0x11 < *(byte *)(param_1[0x12] + 2 + param_1[0x15])) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        if (param_1[(int)(uint)(param_1[0x14] - 2U <
                               (ulong)*(byte *)(param_1[0x12] + 2 + param_1[0x15]))] != 0) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        local_e0 = param_1[(int)(uint)*(byte *)(param_1[0x12] + 2 + param_1[0x15])];
      }
    }
    break;
  case 0x1c:
    uVar2 = param_1[0x13] & 8;
joined_r0x00111357:
    if (uVar2 != 0) goto switchD_001012c1_caseD_13;
    break;
  case 0x1d:
    uVar2 = param_1[0x13] & 8;
joined_r0x0011137a:
    if (uVar2 == 0) goto switchD_001012c1_caseD_13;
    break;
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
          if ((ulong)(param_1[0x16] - param_1[2]) < (ulong)param_1[3]) {
            *param_1 = -1;
            uVar8 = 1;
            goto LAB_001119bd;
          }
          sVar9 = read(*local_d8,(void *)(param_1[0x17] + param_1[2]),param_1[3]);
          *param_1 = sVar9;
        }
        else {
          if (bVar5 != 9) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
          if ((ulong)(param_1[0x18] - param_1[2]) < (ulong)param_1[3]) {
            *param_1 = -1;
            uVar8 = 1;
            goto LAB_001119bd;
          }
          sVar9 = read(*local_d8,(void *)(param_1[0x19] + param_1[2]),param_1[3]);
          *param_1 = sVar9;
        }
      }
    }
    else {
      if (lVar4 == 0) {
        if (*(char *)(param_1[0x12] + 1 + param_1[0x15]) != '\n') {
          uVar8 = 1;
          goto LAB_001119bd;
        }
        iVar7 = FUN_00111f20(param_1[0x17] + param_1[1],local_a8,param_1[0x17] + param_1[1]);
        if (iVar7 < 0) {
          uVar8 = 1;
          goto LAB_001119bd;
        }
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
              if ((ulong)(param_1[0x16] - param_1[2]) < (ulong)param_1[3]) {
                *param_1 = -1;
                uVar8 = 1;
                goto LAB_001119bd;
              }
              sVar9 = write(*local_d8,(void *)(param_1[0x17] + param_1[2]),param_1[3]);
              *param_1 = sVar9;
            }
            else {
              if (bVar5 != 9) {
                uVar8 = 1;
                goto LAB_001119bd;
              }
              if ((ulong)(param_1[0x18] - param_1[2]) < (ulong)param_1[3]) {
                *param_1 = -1;
                uVar8 = 1;
                goto LAB_001119bd;
              }
              sVar9 = write(*local_d8,(void *)(param_1[0x19] + param_1[2]),param_1[3]);
              *param_1 = sVar9;
            }
          }
        }
        else {
          if (lVar4 != 3) {
            uVar8 = 1;
            goto LAB_001119bd;
          }
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
  }
  param_1[0x12] = local_e0;
  uVar8 = 0;
LAB_001119bd:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

