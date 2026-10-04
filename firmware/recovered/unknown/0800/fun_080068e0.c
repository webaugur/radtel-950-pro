/**
 * @brief fun_080068e0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080068e0, Ghidra name FUN_080068e0, 110 bytes.
 *       Not linked into rt950-firmware.
 */

ushort FUN_080068e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = param_4;
  local_10 = FUN_08000ea6(param_1);
  FUN_08000ee4((int)&local_14 + (3 - local_10),param_1);
  return CONCAT11((undefined1)local_14,local_14._2_1_ & 0xf | local_14._1_1_ << 4) & 0xfff;
}

