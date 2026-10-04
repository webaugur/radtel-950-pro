/**
 * @brief fun_0800f2c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f2c8, Ghidra name FUN_0800f2c8, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f2c8(void)

{
  byte bVar1;
  int iVar2;
  
  if (*DAT_0800f2fc != '\0') {
    FUN_08001016(DAT_0800f2fc,0x65);
    FUN_08021764(0x11000);
    iVar2 = 0x13000;
    bVar1 = 0;
    do {
      FUN_08021764(iVar2);
      iVar2 = iVar2 + 0x1000;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 0x19);
  }
  return;
}

