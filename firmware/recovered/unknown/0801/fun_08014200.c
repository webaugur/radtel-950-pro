/**
 * @brief fun_08014200
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014200, Ghidra name FUN_08014200, 448 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint unaff_r4;
  uint unaff_r5;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  ushort local_1a;
  
  iVar7 = iRam080143bc;
  iVar6 = iRam080143b8;
  uStack_1c = (undefined2)param_4;
  local_1a = (ushort)((uint)param_4 >> 0x10);
  local_20 = (undefined2)param_3;
  local_1e = (undefined2)((uint)param_3 >> 0x10);
  bVar4 = *(byte *)(iRam080143b8 + 0xa1);
  iVar9 = *(int *)(iRam080143b8 + 0x14);
  uVar11 = (uint)*(byte *)(iRam080143b8 + 0x1a) + (uint)*(byte *)(iRam080143b8 + 0x19) * 0x100;
  if (bVar4 == 0x12) {
    *(undefined1 *)(iRam080143b8 + 0xa4) = 1;
    *(int *)(iVar7 + 4) = iVar9;
    *(short *)(iVar6 + 0xa6) = (short)uVar11;
    FUN_0801a0c0(0x12,6,2);
    return;
  }
  if (bVar4 < 0x13) {
    piVar1 = (int *)(iRam080143b8 + 0xac);
    if (bVar4 == 5) {
      FUN_08000ee4(*piVar1 + (uint)CONCAT11(*(undefined1 *)(iRam080143b8 + 0x11),
                                            *(undefined1 *)(iRam080143b8 + 0x12)) * 0x80,
                   iRam080143b8 + 0x14,0x80);
      FUN_0801a0c0(0x14,6,0);
      goto LAB_08014246;
    }
    if (bVar4 == 6) {
      if (*(char *)(iRam080143b8 + 0xa4) == '\0') {
        FUN_0801a0c0(0x12,0xe3,0);
      }
      else {
        *(undefined1 *)(iRam080143b8 + 0xa4) = 0;
        uVar11 = FUN_0800a878(*piVar1,*(undefined2 *)(iVar6 + 0xa6));
        if (uVar11 == *(ushort *)(iVar6 + 0x15)) {
          FUN_080219b8(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar6 + 0xac),
                       *(undefined2 *)(iVar6 + 0xa6));
          FUN_0801a0c0(6,6,0);
        }
        else {
          FUN_0801a0c0(6,0xe4,0);
        }
      }
      goto LAB_08014246;
    }
    if (bVar4 == 0x11) goto LAB_08014246;
  }
  else {
    if (bVar4 == 0x13) {
      *(undefined1 *)(iRam080143b8 + 0xa4) = 0;
      cVar2 = *(char *)(iVar6 + 0x14);
      if (*(short *)(iVar6 + 4) != 0) {
        *(int *)(iVar7 + 4) = iVar9;
        unaff_r4 = uVar11;
      }
      if (cVar2 == '\x02') {
        for (uVar11 = 0; uVar11 < unaff_r4; uVar11 = uVar11 + 1 & 0xffff) {
          FUN_08021764(*(undefined4 *)(iVar7 + 4));
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 0x100;
        }
      }
      else if (cVar2 == '\x03') {
        for (uVar11 = 0; uVar11 < unaff_r4; uVar11 = uVar11 + 1 & 0xffff) {
          FUN_08021624(*(undefined4 *)(iVar7 + 4));
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 0x8000;
        }
      }
      else if (cVar2 == '\x04') {
        for (uVar11 = 0; uVar11 < unaff_r4; uVar11 = uVar11 + 1 & 0xffff) {
          FUN_08021694(*(undefined4 *)(iVar7 + 4));
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 0x10000;
        }
      }
      else {
        FUN_08021708();
      }
      FUN_0801a0c0(*(undefined1 *)(iVar6 + 0xa1),6,0);
      goto LAB_08014246;
    }
    if (bVar4 == 0x14) {
      local_1e = (undefined2)iVar9;
      uStack_1c = (undefined2)((uint)iVar9 >> 0x10);
      local_1a = *(ushort *)(iRam080143b8 + 0x18);
      if ((iVar9 - 0x10000U < 0xed001) && (uVar11 = FUN_08008ad8(iVar9), uVar11 == local_1a)) {
        local_20 = 0xa55a;
        FUN_080219b8(0x300000,&local_20,8);
        FUN_0801a0c0(0x14,6,0);
      }
      else {
        FUN_0801a0c0(0x14,0xe4,0);
      }
      goto LAB_08014246;
    }
    if (bVar4 == 0x45) {
      FUN_08018f7c();
      pbVar5 = DAT_0801452c;
      iVar6 = DAT_08014528;
      puVar10 = *(undefined4 **)(DAT_08014528 + 0xc);
      *(undefined4 *)(DAT_0801452c + 0xe) = *puVar10;
      pbVar5[0xc] = 4;
      pbVar5[0xd] = 0;
      bVar4 = *pbVar5;
      if (bVar4 == 6) {
        FUN_08018fc4();
      }
      else {
        if (bVar4 < 7) {
          if (bVar4 == 3) {
            *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)((int)puVar10 + 6);
            pbVar5[8] = 0;
            pbVar5[9] = 0;
          }
          else if (bVar4 == 4) {
            cVar2 = *(char *)((int)puVar10 + 3);
            if (*(short *)(pbVar5 + 10) != 0) {
              unaff_r4 = *(uint *)((int)puVar10 + 6);
              unaff_r5 = (uint)*(byte *)((int)puVar10 + 0xb) +
                         (uint)*(byte *)((int)puVar10 + 10) * 0x100;
            }
            if (cVar2 == '\x02') {
              for (uVar11 = 0; uVar11 < unaff_r5; uVar11 = uVar11 + 1 & 0xff) {
                FUN_08021764(unaff_r4);
                unaff_r4 = unaff_r4 + 0x100;
              }
            }
            else if (cVar2 == '\x03') {
              for (uVar11 = 0; uVar11 < unaff_r5; uVar11 = uVar11 + 1 & 0xff) {
                FUN_08021624(unaff_r4);
                unaff_r4 = unaff_r4 + 0x8000;
              }
            }
            else if (cVar2 == '\x04') {
              for (uVar11 = 0; uVar11 < unaff_r5; uVar11 = uVar11 + 1 & 0xff) {
                FUN_08021694(unaff_r4);
                unaff_r4 = unaff_r4 + 0x10000;
              }
            }
            else {
              FUN_08021708();
            }
          }
        }
        else {
          if (bVar4 == 0x52) {
            FUN_08021a54(0xee,6);
            return;
          }
          if (bVar4 == 0x57) {
            if (*(short *)(pbVar5 + 8) !=
                CONCAT11(*(undefined1 *)((int)puVar10 + 2),*(undefined1 *)((int)puVar10 + 3))) {
              FUN_08021a54(0xee,6);
              return;
            }
            FUN_080219b8(*(undefined4 *)(pbVar5 + 4),(int)puVar10 + 6);
            *(uint *)(pbVar5 + 4) = *(int *)(pbVar5 + 4) + (uint)*(ushort *)(pbVar5 + 10);
            *(short *)(pbVar5 + 8) = *(short *)(pbVar5 + 8) + 1;
          }
        }
        if (*(short *)(pbVar5 + 0xc) != 4) {
          if (*(short *)(pbVar5 + 0xc) == 0x406) {
            pbVar5[0x12] = 4;
            pbVar5[0x13] = 0;
          }
          goto LAB_080144cc;
        }
      }
      DAT_0801452c[0x12] = 0;
      DAT_0801452c[0x13] = 1;
      pbVar5[0xc] = 7;
      pbVar5[0xd] = 0;
      DAT_0801452c[0x14] = 0x59;
LAB_080144cc:
      uVar8 = FUN_0800a878(DAT_0801452c + 0xf,*(short *)(pbVar5 + 0xc) + -1);
      uVar3 = *(ushort *)(pbVar5 + 0xc);
      *(ushort *)(pbVar5 + 0xc) = uVar3 + 1;
      pbVar5[uVar3 + 0xe] = (byte)((ushort)uVar8 >> 8);
      uVar3 = *(ushort *)(pbVar5 + 0xc);
      *(ushort *)(pbVar5 + 0xc) = uVar3 + 1;
      pbVar5[uVar3 + 0xe] = (byte)uVar8;
      FUN_08022dd6(DAT_0801452c + 0xe,*(undefined2 *)(pbVar5 + 0xc));
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      *(undefined2 *)(iVar6 + 6) = 0;
      return;
    }
  }
  *(undefined1 *)(iRam080143b8 + 0xa4) = 0;
LAB_08014246:
  *(undefined2 *)(iVar6 + 6) = 0;
  return;
}

