/**
 * @brief fun_08012558
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012558, Ghidra name FUN_08012558, 28 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08012558(uint param_1)

{
  uint uVar1;
  
  uVar1 = 6;
  do {
    if (*(uint *)(DAT_08012574 + uVar1 * 4) <= param_1) {
      return uVar1 & 0xff;
    }
    uVar1 = (uint)(char)((char)uVar1 + -1);
  } while (-1 < (int)uVar1);
  return 0;
}

