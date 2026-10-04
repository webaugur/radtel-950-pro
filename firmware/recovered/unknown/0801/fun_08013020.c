/**
 * @brief fun_08013020
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013020, Ghidra name FUN_08013020, 70 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08013020(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = (byte *)*DAT_08013068;
  for (uVar1 = 0; uVar1 < (uint)DAT_08013068[2]; uVar1 = uVar1 + 1) {
    pbVar3 = *(byte **)(pbVar3 + DAT_08013068[uVar1 + 3] * 0x21 + 0x1d);
  }
  iVar4 = 0;
  for (; ((iVar2 = FUN_08007938(pbVar3,0,0x21), iVar2 != 1 && (iVar4 = iVar4 + 1, iVar4 != 0xff)) &&
         (-1 < (int)((uint)*pbVar3 << 0x18))); pbVar3 = pbVar3 + 0x21) {
  }
  return iVar4;
}

