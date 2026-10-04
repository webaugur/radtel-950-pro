/**
 * @brief fun_0801a680
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a680, Ghidra name FUN_0801a680, 260 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a680(uint *param_1)

{
  int iVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_0801a784;
  uVar3 = *(uint *)(DAT_0801a784 + 4) & 0xc;
  if (uVar3 == 0) {
    if ((*(int *)(DAT_0801a784 + 0x30) << 6 < 0) && (*(int *)(DAT_0801a784 + 0x54) << 0x16 < 0)) {
      *param_1 = DAT_0801a790;
    }
    else {
      *param_1 = DAT_0801a788;
    }
  }
  else if (uVar3 == 4) {
    *param_1 = DAT_0801a788;
  }
  else if (uVar3 == 8) {
    uVar3 = *(uint *)(DAT_0801a784 + 4) & DAT_0801a794;
    if (((uVar3 & 0x60000000) == 0) && ((uVar3 & 0x3fffff) >> 0x12 != 0xf)) {
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
    }
    iVar5 = ((uVar3 & 0x3fffff) >> 0x12 | (uVar3 & 0x60000000) >> 0x19) + iVar5;
    if ((*(uint *)(DAT_0801a784 + 4) & 0x10000) == 0) {
      *param_1 = DAT_0801a798 * iVar5;
    }
    else if (*(int *)(DAT_0801a784 + 4) << 0xe < 0) {
      *param_1 = iVar5 * (DAT_0801a788 / (((*(uint *)(DAT_0801a784 + 0x54) & 0x3000) >> 0xc) + 2));
    }
    else {
      *param_1 = DAT_0801a788 * iVar5;
    }
    if ((-1 < *(int *)(iVar1 + 4)) && (DAT_0801a79c < *param_1)) {
      *param_1 = DAT_0801a79c;
    }
  }
  else {
    *param_1 = DAT_0801a788;
  }
  iVar5 = DAT_0801a78c;
  if (*(int *)(iVar1 + 4) << 0x18 < 0) {
    sVar2 = *(sbyte *)(DAT_0801a78c + ((*(uint *)(iVar1 + 4) & 0x7f) >> 4));
  }
  else {
    sVar2 = 0;
  }
  uVar3 = *param_1 >> sVar2;
  param_1[1] = uVar3;
  if (*(int *)(iVar1 + 4) << 0x15 < 0) {
    sVar2 = *(sbyte *)(iVar5 + ((*(uint *)(iVar1 + 4) & 0x3ff) >> 8));
  }
  else {
    sVar2 = 0;
  }
  param_1[2] = uVar3 >> sVar2;
  if (*(int *)(iVar1 + 4) << 0x12 < 0) {
    sVar2 = *(sbyte *)(iVar5 + ((*(uint *)(iVar1 + 4) & 0x1fff) >> 0xb));
  }
  else {
    sVar2 = 0;
  }
  param_1[3] = uVar3 >> sVar2;
  uVar4 = (*(uint *)(iVar1 + 4) & 0xffff) >> 0xe;
  if (*(int *)(iVar1 + 4) << 3 < 0) {
    uVar4 = uVar4 | 4;
  }
  param_1[4] = (uVar3 >> sVar2) / (uint)*(byte *)(DAT_0801a78c + 8 + uVar4);
  return;
}

