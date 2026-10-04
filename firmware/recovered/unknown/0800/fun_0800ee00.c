/**
 * @brief fun_0800ee00
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ee00, Ghidra name FUN_0800ee00, 124 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ee00(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = DAT_0800ee84;
  puVar1 = DAT_0800ee80;
  puVar3 = DAT_0800ee80 + -1;
  if (*(char *)(DAT_0800ee7c + 0x43) != '\0') {
    *DAT_0800ee80 = 0x42;
    puVar1[1] = 3;
    FUN_080277c6(2,puVar1,8,puVar1 + 7);
    *(ushort *)(iVar2 + 2) = CONCAT11(puVar1[9],puVar1[10]);
    *puVar3 = 0;
    *(undefined1 *)(iVar2 + 0x1b) = puVar1[0xb];
    *(undefined1 *)(iVar2 + 0x1c) = puVar1[0xc];
    FUN_0800ed30(0);
    return;
  }
  *DAT_0800ee80 = 0x22;
  puVar1[1] = 3;
  FUN_080277c6(2,DAT_0800ee80,7);
  *(ushort *)(iVar2 + 2) = CONCAT11(puVar1[9],puVar1[10]);
  *puVar3 = 0;
  *(undefined1 *)(iVar2 + 0x1b) = puVar1[0xb];
  *(undefined1 *)(iVar2 + 0x1c) = puVar1[0xc];
  FUN_0800ed30(0);
  return;
}

