/**
 * @brief fun_0800ed80
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ed80, Ghidra name FUN_0800ed80, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ed80(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0800edc8;
  DAT_0800edc8[1] = 1;
  if (*(char *)(DAT_0800edcc + 0x43) == '\0') {
    *puVar1 = 0x23;
    FUN_080277c6(2,DAT_0800edc8,8);
  }
  else {
    *puVar1 = 0x43;
    FUN_080277c6(2,puVar1,6,puVar1 + 7);
  }
  iVar2 = DAT_0800edd0;
  puVar1 = DAT_0800edc8;
  *(undefined1 *)(DAT_0800edd0 + 0x1b) = DAT_0800edc8[0xb];
  *(undefined1 *)(iVar2 + 0x1c) = puVar1[0xc];
  return;
}

