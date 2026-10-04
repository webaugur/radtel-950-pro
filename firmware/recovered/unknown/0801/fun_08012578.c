/**
 * @brief fun_08012578
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012578, Ghidra name FUN_08012578, 88 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08012578(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = DAT_080125d0;
  param_1 = param_1 | 0x800;
  *(uint *)(DAT_080125d0 + 0xc) = param_1;
  uVar4 = 1;
  uVar2 = 0;
  bVar3 = 1;
  do {
    if ((((uVar2 & 2) == 0) || ((param_1 & uVar4) == 0)) &&
       ((uVar2 & 2) != 0 || (param_1 & uVar4) != 0)) {
      uVar5 = 0xc75;
    }
    else {
      uVar5 = 0;
    }
    uVar4 = (uVar4 & 0x7fff) << 1;
    uVar2 = uVar2 >> 1 ^ uVar5;
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0xd);
  *(uint *)(iVar1 + 0xc) = (param_1 << 1 | uVar2 << 0xc) >> 1;
  return;
}

