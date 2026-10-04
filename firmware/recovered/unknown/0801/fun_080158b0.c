/**
 * @brief fun_080158b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080158b0, Ghidra name FUN_080158b0, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080158b0(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + (param_2 >> 3));
  bVar1 = (byte)(1 << (param_2 & 7));
  if (param_3 != 0) {
    *pbVar2 = *pbVar2 | bVar1;
    return;
  }
  *pbVar2 = *pbVar2 & ~bVar1;
  return;
}

