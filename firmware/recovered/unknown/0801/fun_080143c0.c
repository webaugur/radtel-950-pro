/**
 * @brief fun_080143c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080143c0, Ghidra name FUN_080143c0, 358 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080143c0(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  int unaff_r4;
  uint unaff_r5;
  uint uVar8;
  
  pbVar4 = DAT_0801452c;
  iVar5 = DAT_08014528;
  puVar7 = *(undefined4 **)(DAT_08014528 + 0xc);
  *(undefined4 *)(DAT_0801452c + 0xe) = *puVar7;
  pbVar4[0xc] = 4;
  pbVar4[0xd] = 0;
  bVar1 = *pbVar4;
  if (bVar1 == 6) {
    FUN_08018fc4();
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 3) {
        *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)((int)puVar7 + 6);
        pbVar4[8] = 0;
        pbVar4[9] = 0;
      }
      else if (bVar1 == 4) {
        cVar2 = *(char *)((int)puVar7 + 3);
        if (*(short *)(pbVar4 + 10) != 0) {
          unaff_r4 = *(int *)((int)puVar7 + 6);
          unaff_r5 = (uint)*(byte *)((int)puVar7 + 0xb) + (uint)*(byte *)((int)puVar7 + 10) * 0x100;
        }
        if (cVar2 == '\x02') {
          for (uVar8 = 0; uVar8 < unaff_r5; uVar8 = uVar8 + 1 & 0xff) {
            FUN_08021764(unaff_r4);
            unaff_r4 = unaff_r4 + 0x100;
          }
        }
        else if (cVar2 == '\x03') {
          for (uVar8 = 0; uVar8 < unaff_r5; uVar8 = uVar8 + 1 & 0xff) {
            FUN_08021624(unaff_r4);
            unaff_r4 = unaff_r4 + 0x8000;
          }
        }
        else if (cVar2 == '\x04') {
          for (uVar8 = 0; uVar8 < unaff_r5; uVar8 = uVar8 + 1 & 0xff) {
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
      if (bVar1 == 0x52) {
        FUN_08021a54(0xee,6);
        return;
      }
      if (bVar1 == 0x57) {
        if (*(short *)(pbVar4 + 8) !=
            CONCAT11(*(undefined1 *)((int)puVar7 + 2),*(undefined1 *)((int)puVar7 + 3))) {
          FUN_08021a54(0xee,6);
          return;
        }
        FUN_080219b8(*(undefined4 *)(pbVar4 + 4),(int)puVar7 + 6);
        *(uint *)(pbVar4 + 4) = *(int *)(pbVar4 + 4) + (uint)*(ushort *)(pbVar4 + 10);
        *(short *)(pbVar4 + 8) = *(short *)(pbVar4 + 8) + 1;
      }
    }
    if (*(short *)(pbVar4 + 0xc) != 4) {
      if (*(short *)(pbVar4 + 0xc) == 0x406) {
        pbVar4[0x12] = 4;
        pbVar4[0x13] = 0;
      }
      goto LAB_080144cc;
    }
  }
  DAT_0801452c[0x12] = 0;
  DAT_0801452c[0x13] = 1;
  pbVar4[0xc] = 7;
  pbVar4[0xd] = 0;
  DAT_0801452c[0x14] = 0x59;
LAB_080144cc:
  uVar6 = FUN_0800a878(DAT_0801452c + 0xf,*(short *)(pbVar4 + 0xc) + -1);
  uVar3 = *(ushort *)(pbVar4 + 0xc);
  *(ushort *)(pbVar4 + 0xc) = uVar3 + 1;
  pbVar4[uVar3 + 0xe] = (byte)((ushort)uVar6 >> 8);
  uVar3 = *(ushort *)(pbVar4 + 0xc);
  *(ushort *)(pbVar4 + 0xc) = uVar3 + 1;
  pbVar4[uVar3 + 0xe] = (byte)uVar6;
  FUN_08022dd6(DAT_0801452c + 0xe,*(undefined2 *)(pbVar4 + 0xc));
  pbVar4[0xc] = 0;
  pbVar4[0xd] = 0;
  *(undefined2 *)(iVar5 + 6) = 0;
  return;
}

