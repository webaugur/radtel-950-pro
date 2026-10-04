/**
 * @brief fun_080234ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080234ac, Ghidra name FUN_080234ac, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080234ac(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_080234d8;
  if ((param_1 != 0) && (*(char *)(DAT_080234d4 + 7) != '\0')) {
    if (*(char *)(DAT_080234d4 + 8) != '\x01') {
      param_1 = param_1 + 0x3c & 0xff;
    }
    *DAT_080234d8 = 1;
    puVar1[3] = (char)param_1;
    puVar1[2] = 1;
    puVar1[1] = 0;
  }
  return;
}

