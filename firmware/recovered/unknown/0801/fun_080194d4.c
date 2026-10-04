/**
 * @brief fun_080194d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080194d4, Ghidra name FUN_080194d4, 344 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080194d4(int param_1)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint extraout_r2;
  int extraout_r3;
  uint uVar11;
  
  FUN_0800a110();
  iVar5 = DAT_08019588;
  iVar4 = DAT_08019584;
  iVar9 = DAT_08019580;
  uVar11 = param_1 - 0x30;
  cVar1 = *(char *)(DAT_08019580 + 0x10);
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    puVar10 = *(undefined1 **)(DAT_08019588 + -0x30 + uVar11 * 4);
  }
  else {
    if (cVar1 == '\x03') {
      *(undefined4 *)(DAT_08019584 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      pbVar3 = DAT_08014694;
      bVar6 = **(byte **)(iVar5 + uVar11 * 4);
      uVar11 = (uint)bVar6;
      if (uVar11 == 0x2a) {
        return 1;
      }
      iVar9 = DAT_08014698;
      if (*DAT_08014694 != 0) {
LAB_08014622:
        bVar6 = *pbVar3;
        if (6 < bVar6) {
          return 1;
        }
        *pbVar3 = bVar6 + 1;
        pbVar3[bVar6 + 1] = (byte)uVar11;
        pbVar2 = DAT_08014694;
        DAT_08014694[*pbVar3 + 1] = 0;
        if (*(char *)(iVar9 + 2) == '\x01') {
          *(undefined1 *)(iVar9 + 1) = 2;
        }
        else {
          *(undefined1 *)(iVar9 + 1) = 0;
          if (uVar11 == 0x31) {
            bVar6 = *pbVar3;
            *pbVar3 = bVar6 - 1;
            pbVar2[(byte)(bVar6 - 1) + 1] = 0;
            FUN_0800e528();
          }
        }
        iVar9 = FUN_0801fc70();
        if (iVar9 == 0) {
          FUN_0800c35c(0);
        }
        else {
          if (*pbVar3 != 1) {
            bVar6 = *pbVar3 - 1;
            *pbVar3 = bVar6;
            pbVar2[bVar6 + 1] = 0;
            return 1;
          }
          FUN_0800c35c(1);
        }
        return 0;
      }
      if (uVar11 != 0x30) {
        *(byte *)(DAT_08014698 + 2) = bVar6 - 0x30;
        FUN_08020324(1);
        uVar11 = extraout_r2;
        iVar9 = extraout_r3;
        goto LAB_08014622;
      }
      uVar7 = 0x20;
      goto LAB_08008a70;
    }
    puVar10 = *(undefined1 **)(DAT_08019588 + uVar11 * 4);
  }
  *(undefined4 *)(DAT_08019584 + 0x18) = 3;
  if (*(int *)(iVar4 + 0x14) == param_1) {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    while (puVar10[*(int *)(iVar4 + 0x10)] == '\0') {
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
    uVar7 = FUN_08008074();
    if (*(int *)(iVar9 + 0xc) != 0) {
      *(undefined1 *)(*(int *)(iVar9 + 0xc) + DAT_08019580 + 0x11) = uVar7;
      return 0;
    }
  }
  else {
    if ((cVar1 == '\x02') && (uVar11 < 10)) {
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
    else {
      *(int *)(iVar4 + 0x14) = param_1;
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
    uVar7 = FUN_08008074(*puVar10);
  }
LAB_08008a70:
  if ((*(uint *)(DAT_08008a90 + 8) != 0) &&
     (*(uint *)(DAT_08008a90 + 8) <= *(uint *)(DAT_08008a90 + 4))) {
    return 1;
  }
  if (0x3e < *(uint *)(DAT_08008a90 + 4)) {
    return 1;
  }
  uVar8 = FUN_0801469c(uVar7);
  return uVar8;
}

