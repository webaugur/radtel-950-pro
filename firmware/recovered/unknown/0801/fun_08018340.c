/**
 * @brief fun_08018340
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018340, Ghidra name FUN_08018340, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018340(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_08018364;
  bVar1 = *(byte *)(DAT_08018360 + 1);
  *(ushort *)(DAT_08018364 + 0x4e) = (bVar1 + 1) * 0x32;
  if (bVar1 == 10) {
    *(undefined2 *)(iVar2 + 0x4e) = 600;
  }
  return;
}

