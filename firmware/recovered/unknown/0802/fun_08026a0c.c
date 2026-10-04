/**
 * @brief fun_08026a0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026a0c, Ghidra name FUN_08026a0c, 92 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026a0c(byte *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  uVar2 = (uint)param_1[1];
  iVar1 = _BYTE_ARRAY_08026a68;
  if ((4 < uVar3 - 0xa4) || (uVar2 < 0xa1)) {
    if ((uVar3 - 0xa1 < 9) && (0xa0 < uVar2)) {
      iVar1 = _BYTE_ARRAY_08026a68 + (uVar2 + (uVar3 - 0xa1) * 0x5e + -0xa1) * 0x20;
    }
    else if ((uVar3 - 0xb0 < 0x48) && (0xa0 < uVar2)) {
      iVar1 = _BYTE_ARRAY_08026a68 + (uVar2 + (uVar3 - 0xb0) * 0x5e + 0x2ad) * 0x20;
    }
  }
  FUN_08021824(iVar1,param_2,0x20);
  return;
}

