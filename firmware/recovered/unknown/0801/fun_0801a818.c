/**
 * @brief fun_0801a818
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a818, Ghidra name FUN_0801a818, 126 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801a818(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  if (*(char *)(DAT_0801a898 + 1) == '\v') {
    return 1;
  }
  if (((*DAT_0801a89c != '\0') && (*(char *)(DAT_0801a8a0 + 0xfa) == DAT_0801a89c[0x1c])) &&
     (iVar3 = FUN_08009d74(), iVar3 == 0)) {
    return 1;
  }
  iVar3 = FUN_0801bd5c();
  if (((iVar3 == 0) && (iVar3 = FUN_08009d74(), iVar3 == 0)) &&
     (*(char *)(DAT_0801a8a4 + 0x23) == '\0')) {
    return 1;
  }
  iVar3 = FUN_0801c674(0);
  pbVar2 = DAT_0801a8a8;
  if (iVar3 == 0) {
    *DAT_0801a8a8 = 0;
    FUN_08009cec();
    return 0;
  }
  bVar1 = *DAT_0801a8a8;
  *DAT_0801a8a8 = bVar1 + 1;
  if ((byte)(bVar1 + 1) < 3) {
    return 0;
  }
  iVar3 = FUN_08009d74();
  if (iVar3 == 1) {
    FUN_0801e940();
  }
  *pbVar2 = 0;
  return 1;
}

