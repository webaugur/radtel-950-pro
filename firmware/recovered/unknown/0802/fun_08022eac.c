/**
 * @brief fun_08022eac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022eac, Ghidra name FUN_08022eac, 48 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022eac(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_10;
  
  local_10 = in_r3;
  FUN_08012aea(&local_10);
  uVar1 = DAT_08022edc;
  local_10 = 0x10020400;
  FUN_080125d4(DAT_08022edc,&local_10);
  FUN_08012ae2(uVar1,0x400);
  return;
}

