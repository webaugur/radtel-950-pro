/**
 * @brief fun_0801328c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801328c, Ghidra name FUN_0801328c, 16 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801328c(void)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_0801329c + 1) != '\x01') {
    uVar1 = FUN_080138f8();
    return uVar1;
  }
  return 0;
}

