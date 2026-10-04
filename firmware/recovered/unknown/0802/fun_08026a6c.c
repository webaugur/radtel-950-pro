/**
 * @brief fun_08026a6c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026a6c, Ghidra name FUN_08026a6c, 108 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026a6c(byte *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0xe0000;
  uVar3 = (uint)*param_1;
  uVar2 = (uint)param_1[1];
  if ((4 < uVar3 - 0xa4) || (uVar2 < 0xa1)) {
    if ((uVar3 - 0xa1 < 9) && (0xa0 < uVar2)) {
      iVar1 = (uVar2 + (uVar3 - 0xa1) * 0x5e + -0xa1) * 0x4b + 0xe0000;
    }
    else if ((uVar3 - 0xb0 < 0x48) && (0xa0 < uVar2)) {
      iVar1 = (uVar2 + (uVar3 - 0xb0) * 0x5e + -0xa1) * 0x4b + 0xe0000;
    }
  }
  FUN_08021824(iVar1,param_2,0x4b);
  return;
}

