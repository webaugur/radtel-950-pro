/**
 * @brief fun_0801f188
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f188, Ghidra name FUN_0801f188, 30 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801f188(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(DAT_0801f1a8 + uVar1 * 4 + 4) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x14);
  return 0;
}

