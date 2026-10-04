/**
 * @brief fun_08020144
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020144, Ghidra name FUN_08020144, 42 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020144(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(DAT_08020170 + 4);
  if (1 < bVar1) {
    bVar2 = *(byte *)(DAT_08020170 + 5);
    if (param_1 == 0) {
      if (bVar2 != 0) {
        *(byte *)(DAT_08020170 + 5) = bVar2 - 1;
        return;
      }
      *(byte *)(DAT_08020170 + 5) = bVar1 - 1;
      return;
    }
    uVar3 = bVar2 + 1;
    *(byte *)(DAT_08020170 + 5) = (char)uVar3 - bVar1 * (char)(uVar3 / bVar1);
  }
  return;
}

