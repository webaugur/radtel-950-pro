/**
 * @brief fun_08021140
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021140, Ghidra name FUN_08021140, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021140(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  for (uVar2 = 1; uVar2 < param_2; uVar2 = uVar2 + 1 & 0xffff) {
    if (bVar1 < param_1[uVar2]) {
      bVar1 = param_1[uVar2];
    }
  }
  return;
}

