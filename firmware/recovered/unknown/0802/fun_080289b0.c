/**
 * @brief fun_080289b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080289b0, Ghidra name FUN_080289b0, 46 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_080289b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0x80000000;
  if ((int)uVar2 < 0) {
    param_1 = -param_1;
  }
  uVar1 = param_1 << LZCOUNT(param_1);
  if (uVar1 != 0) {
    return CONCAT44(uVar2 + (0x41d - LZCOUNT(param_1)) * 0x100000 + (uVar1 >> 0xb),uVar1 << 0x15);
  }
  return 0;
}

