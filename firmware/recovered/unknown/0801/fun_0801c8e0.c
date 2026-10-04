/**
 * @brief fun_0801c8e0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c8e0, Ghidra name FUN_0801c8e0, 24 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0801c8e0(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_08012558();
  return (int)(short)(*(short *)(DAT_0801c8f8 + iVar1 * 4) + (short)(param_2 >> 1) + -0xa0);
}

