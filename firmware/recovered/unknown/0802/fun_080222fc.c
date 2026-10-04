/**
 * @brief fun_080222fc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080222fc, Ghidra name FUN_080222fc, 76 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080222fc(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if ((((param_1 == DAT_08022348) || (param_1 == (ushort *)&DAT_40000000)) ||
      (param_1 == DAT_0802234c)) ||
     (((param_1 == DAT_08022350 || (param_1 == DAT_08022354)) || (param_1 == DAT_08022358)))) {
    uVar1 = param_2[2] | uVar1 & 0xff8f;
  }
  *param_1 = param_2[6] | uVar1 & 0xfcff;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 4);
  param_1[0x14] = *param_2;
  param_1[0x18] = (ushort)(byte)param_2[7];
  param_1[10] = 1;
  return;
}

