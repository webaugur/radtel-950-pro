/**
 * @brief fun_08039d5a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08039d5a, Ghidra name FUN_08039d5a, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08039d5a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  
  *unaff_r6 = param_1;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r6;
  *unaff_r6 = param_1;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r6;
  return CONCAT44(param_2,param_1);
}

