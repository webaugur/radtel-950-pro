/**
 * @brief fun_0801c894
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c894, Ghidra name FUN_0801c894, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c894(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0801c8dc;
  FUN_08012ae2(DAT_0801c8dc,0x8000);
  FUN_0800ad22(5);
  FUN_0801b9a0(param_1);
  FUN_0801b9a0(param_2 >> 8);
  FUN_0801b9a0(param_2 & 0xff);
  FUN_08012ae6(uVar1,0x8000);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x400);
  return;
}

