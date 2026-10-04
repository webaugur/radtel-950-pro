/**
 * @brief fun_08006278
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006278, Ghidra name FUN_08006278, 44 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08006278(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (0xb < param_2) {
    uVar1 = (param_1 + param_2) - 0xc & 0xff;
    if (0x17 < uVar1) {
      uVar1 = uVar1 - 0x18 & 0xff;
    }
    return uVar1;
  }
  uVar1 = 0xc - param_2 & 0xff;
  if (uVar1 <= param_1) {
    return param_1 - uVar1 & 0xff;
  }
  return (param_1 - uVar1) + 0x18 & 0xff;
}

