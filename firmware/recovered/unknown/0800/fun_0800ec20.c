/**
 * @brief fun_0800ec20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ec20, Ghidra name FUN_0800ec20, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ec20(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0800ec34;
  uVar1 = DAT_0800ec30;
  *(undefined4 *)(DAT_0800ec34 + 4) = DAT_0800ec30;
  uVar3 = DAT_0800ec38;
  *(undefined4 *)(iVar2 + 4) = DAT_0800ec38;
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  *(undefined4 *)(iVar2 + 0x44) = uVar3;
  return;
}

