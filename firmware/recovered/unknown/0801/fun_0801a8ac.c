/**
 * @brief fun_0801a8ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a8ac, Ghidra name FUN_0801a8ac, 74 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801a8ac(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(DAT_0801a8f8 + 1) == '\v') {
    return 1;
  }
  iVar2 = FUN_0801bd5c();
  if ((iVar2 == 0) && (*(char *)(DAT_0801a8fc + 0x23) == '\0')) {
    return 1;
  }
  iVar3 = FUN_0801c674(1);
  iVar2 = DAT_0801a900;
  if (iVar3 == 0) {
    *(undefined1 *)(DAT_0801a900 + 1) = 0;
    return 1;
  }
  bVar1 = *(char *)(DAT_0801a900 + 1) + 1;
  *(byte *)(DAT_0801a900 + 1) = bVar1;
  if (bVar1 < 0xb) {
    return 1;
  }
  *(undefined1 *)(iVar2 + 1) = 0;
  return 0;
}

