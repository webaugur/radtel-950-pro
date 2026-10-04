/**
 * @brief fun_08002d78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002d78, Ghidra name FUN_08002d78, 80 bytes.
 *       Not linked into rt950-firmware.
 */

ulonglong FUN_08002d78(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_08002dcc(param_1,param_2 >> 0xb,param_3 >> 0xb | param_2 << 0x15,param_4 + -0x3c01);
  if (((uint)uVar1 & 0x7fffffff) + 1 < 0x800) {
    return CONCAT44(extraout_r2,(int)((ulonglong)uVar1 >> 0x20) + (uint)uVar1 * 0x100000);
  }
  return (ulonglong)DAT_08002dc8;
}

