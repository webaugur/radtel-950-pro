/**
 * @brief fun_0801e090
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e090, Ghidra name FUN_0801e090, 50 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e090(void)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(DAT_0801e0c4 + 4) + DAT_0801e0c4 + 0x12) = 0;
  iVar1 = FUN_08000d3a();
  if (iVar1 < 10000) {
    if (iVar1 < DAT_0801e0c8) {
      iVar1 = DAT_0801e0c8;
    }
  }
  else {
    iVar1 = 10000;
  }
  *(short *)(DAT_0801e0cc + 0xf) = (short)iVar1;
  FUN_08018038();
  return 1;
}

