/**
 * @brief fun_0800ee88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ee88, Ghidra name FUN_0800ee88, 130 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ee88(void)

{
  undefined1 *puVar1;
  dword dVar2;
  
  FUN_0800ed30(1);
  *DAT_0800eeb8 = 1;
  dVar2 = DWORD_080260dc;
  puVar1 = DAT_08003c5c;
  if (*(char *)(DAT_0800eebc + 0x43) != '\0') {
    *DAT_08003c5c = 0x41;
    puVar1[1] = 0;
    puVar1[1] = 8;
    puVar1[1] = puVar1[1] | 4;
    FUN_080277c6(2,DAT_08003c5c,1);
    return;
  }
  *(undefined1 *)DWORD_080260dc = 0x21;
  *(undefined1 *)(dVar2 + 1) = 0;
  *(undefined1 *)(dVar2 + 1) = 8;
  *(byte *)(dVar2 + 1) = *(byte *)(dVar2 + 1) | 4;
  FUN_080277c6(2,DWORD_080260dc,1);
  return;
}

