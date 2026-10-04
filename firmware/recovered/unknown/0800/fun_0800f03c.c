/**
 * @brief fun_0800f03c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f03c, Ghidra name FUN_0800f03c, 84 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800f03c(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0800f094;
  if (*(char *)(DAT_0800f090 + 0x43) == '\0') {
    *DAT_0800f094 = 0x22;
    puVar1[1] = 0;
    FUN_080277c6(2,DAT_0800f094,7);
  }
  else {
    *DAT_0800f094 = 0x42;
    puVar1[1] = 0;
    FUN_080277c6(2,puVar1,8,puVar1 + 7);
  }
  iVar2 = DAT_0800f098;
  puVar1 = DAT_0800f094;
  if ((DAT_0800f094[7] & 1) != 0) {
    *(undefined1 *)(DAT_0800f098 + 0x1b) = DAT_0800f094[0xb];
    *(undefined1 *)(iVar2 + 0x1c) = puVar1[0xc];
    return 1;
  }
  return 0;
}

