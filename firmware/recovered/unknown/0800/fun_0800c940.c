/**
 * @brief fun_0800c940
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c940, Ghidra name FUN_0800c940, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c940(void)

{
  if ((DAT_0800c97c[1] != '\x0f') && (DAT_0800c97c[1] != '\x14')) {
    if (*DAT_0800c97c != '\x02') {
      *DAT_0800c97c = '\0';
      FUN_0800c980(0);
      FUN_0800d2a8(0);
      return;
    }
    *DAT_0800c97c = '\0';
    FUN_0800b604(0);
    return;
  }
  *DAT_0800c97c = '\0';
  return;
}

