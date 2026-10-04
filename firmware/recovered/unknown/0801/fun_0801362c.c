/**
 * @brief fun_0801362c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801362c, Ghidra name FUN_0801362c, 168 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801362c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_080136d4;
  iVar5 = 2;
  do {
    piVar1[iVar5] = piVar1[iVar5 + -1];
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar2 = FUN_08013560();
  *piVar1 = iVar2;
  iVar5 = DAT_080136d8;
  uVar3 = 1;
  do {
    if (piVar1[uVar3] != iVar2) {
      return 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  if (iVar2 == 0xff) {
    iVar2 = *(int *)(DAT_080136d8 + 4);
    if (iVar2 != 0xff) {
      *(undefined4 *)(DAT_080136d8 + 8) = 0;
      *(undefined4 *)(iVar5 + 4) = 0xff;
      *param_1 = 0x80;
      param_1[1] = iVar2;
      return 1;
    }
    *(undefined4 *)(DAT_080136d8 + 8) = 0;
    return 0;
  }
  iVar4 = *(int *)(DAT_080136d8 + 4);
  if (iVar4 == 0xff) {
    *(int *)(DAT_080136d8 + 4) = iVar2;
    *(undefined4 *)(iVar5 + 8) = 1;
    *param_1 = 0x10;
    param_1[1] = iVar2;
    return 1;
  }
  if (iVar4 == iVar2) {
    uVar3 = *(int *)(DAT_080136d8 + 8) + 1;
    *(uint *)(DAT_080136d8 + 8) = uVar3;
    if (uVar3 == 100) {
      *param_1 = 0x40;
      param_1[1] = iVar2;
      return 1;
    }
    if (0x95 < uVar3) {
      *(undefined4 *)(iVar5 + 8) = 0x8c;
      *param_1 = 0x20;
      param_1[1] = iVar2;
      return 1;
    }
    return 0;
  }
  *(undefined4 *)(DAT_080136d8 + 8) = 0;
  *(undefined4 *)(iVar5 + 4) = 0xff;
  *param_1 = 0x80;
  param_1[1] = iVar4;
  return 1;
}

