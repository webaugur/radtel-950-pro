/**
 * @brief fun_0801be04
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801be04, Ghidra name FUN_0801be04, 22 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801be04(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_0801be1c + 4))(0x30);
  if (iVar1 << 0x1e < 0) {
    return 1;
  }
  return 0;
}

