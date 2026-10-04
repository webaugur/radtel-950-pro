/**
 * @brief fun_0800703c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800703c, Ghidra name FUN_0800703c, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800703c(void)

{
  if (*(char *)(DAT_08007064 + 1) == '\x0f') {
    return;
  }
  if (*DAT_08007068 != '\0') {
    *DAT_08007068 = '\0';
    FUN_0800aeb8(0xff,1);
    return;
  }
  *DAT_08007068 = '\x01';
  FUN_0800aeb8(4);
  return;
}

