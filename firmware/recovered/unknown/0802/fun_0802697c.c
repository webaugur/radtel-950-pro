/**
 * @brief fun_0802697c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802697c, Ghidra name FUN_0802697c, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802697c(byte *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  uVar2 = (uint)param_1[1];
  if ((uVar3 - 0xa1 < 3) && (0xa0 < uVar2)) {
    iVar1 = DAT_080269e8 + (uVar2 + (uVar3 - 0xa1) * 0x5e + -0xa1) * 0x18;
  }
  else if ((uVar3 == 0xa9) && (0xa0 < uVar2)) {
    iVar1 = DAT_080269e8 + (uVar2 + 0x79) * 0x18;
  }
  else {
    iVar1 = DAT_080269e8;
    if ((uVar3 - 0xb0 < 0x48) && (0xa0 < uVar2)) {
      iVar1 = DAT_080269e8 + (uVar2 + (uVar3 - 0xb0) * 0x5e + 0xd7) * 0x18;
    }
  }
  FUN_08021824(iVar1,param_2,0x18);
  return;
}

