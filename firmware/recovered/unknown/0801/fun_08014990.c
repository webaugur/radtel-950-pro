/**
 * @brief fun_08014990
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014990, Ghidra name FUN_08014990, 76 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014990(void)

{
  int iVar1;
  
  if (*(char *)(DAT_080149c4 + 3) != '\0') {
    if ((*(char *)(DAT_080149c8 + 1) != '\x04') &&
       (((*(char *)(DAT_080149c8 + 1) != '\x02' || (*(char *)(DAT_080149cc + 0x28) != '\x01')) &&
        (*(short *)(DAT_080149c8 + 0x30) == 0)))) {
      FUN_080151cc();
      iVar1 = DAT_08021e88;
      if (*(char *)(DAT_08021e88 + 0x4c) == '\0') {
        *(undefined1 *)(DAT_08021e88 + 0x4c) = 1;
        *(undefined2 *)(iVar1 + 0x4e) = 500;
      }
      return;
    }
  }
  return;
}

