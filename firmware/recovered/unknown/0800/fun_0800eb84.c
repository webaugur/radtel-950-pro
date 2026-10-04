/**
 * @brief fun_0800eb84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eb84, Ghidra name FUN_0800eb84, 146 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800eb84(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0800ec18;
  if ((undefined4 *)0x83fffff < param_1) {
    iVar3 = FUN_0800ec7c(0x100000);
    if (iVar3 == 4) {
      puVar1 = (uint *)(iVar2 + 0x90);
      *puVar1 = *puVar1 | 1;
      *param_1 = param_2;
      FUN_0800ec7c(0x100000);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    return;
  }
  if (DAT_0800ec1c < param_1) {
    if ((~(uint)DAT_0800ec1c + (int)param_1 < 0x80000) &&
       (iVar3 = FUN_0800ec5c(0x100000), iVar3 == 4)) {
      *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) | 1;
      *param_1 = param_2;
      FUN_0800ec5c(0x100000);
      *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xfffffffe;
      return;
    }
  }
  else {
    iVar3 = FUN_0800ec3c(0x100000);
    if (iVar3 != 4) {
      return;
    }
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 1;
    *param_1 = param_2;
    FUN_0800ec9c(0x100000);
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfffffffe;
  }
  return;
}

