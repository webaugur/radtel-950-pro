/**
 * @brief fun_080289f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080289f8, Ghidra name FUN_080289f8, 38 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_080289f8(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 << LZCOUNT(param_1);
  if (uVar1 != 0) {
    return CONCAT44((0x41d - LZCOUNT(param_1)) * 0x100000 + (uVar1 >> 0xb),uVar1 << 0x15);
  }
  return 0;
}

