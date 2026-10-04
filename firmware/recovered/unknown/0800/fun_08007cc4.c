/**
 * @brief fun_08007cc4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007cc4, Ghidra name FUN_08007cc4, 24 bytes.
 *       Not linked into rt950-firmware.
 */

byte FUN_08007cc4(uint param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_2;
  for (uVar2 = 1; uVar2 < param_1; uVar2 = uVar2 + 1 & 0xff) {
    bVar1 = bVar1 ^ param_2[uVar2];
  }
  return bVar1;
}

