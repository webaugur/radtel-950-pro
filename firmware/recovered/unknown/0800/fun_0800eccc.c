/**
 * @brief fun_0800eccc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eccc, Ghidra name FUN_0800eccc, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800eccc(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  FUN_08012ae2(DAT_0800ed20,0x10);
  uVar2 = DAT_0800ed24;
  FUN_08012ae2(DAT_0800ed24,0x40);
  FUN_0800ad06(10);
  FUN_08012ae6(uVar2,0x40);
  bVar1 = *(byte *)(DAT_0800ed28 + 0x43);
  *DAT_0800ed2c = bVar1;
  if (bVar1 < 2) {
    FUN_0802767c();
  }
  else {
    FUN_08027600();
  }
  FUN_0800ad06(500);
  FUN_0800ed30(1);
  FUN_08014964();
  FUN_0801b3fc();
  return;
}

