/**
 * @brief fun_080009e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080009e4, Ghidra name FUN_080009e4, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080009e4(ushort *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *param_3;
  if ((int)((uint)*param_1 << 0x14) < 0) {
    iVar3 = DAT_08000a38 + 0x80009fe;
  }
  else {
    iVar3 = DAT_08000a38 + 0x8000a12;
  }
  iVar2 = 0;
  for (; uVar1 != 0; uVar1 = uVar1 >> 4) {
    *(byte *)((int)param_1 + iVar2 + 0x24) = *(byte *)(iVar3 + (uVar1 & 0xf));
    iVar2 = iVar2 + 1;
  }
  uVar4 = 0;
  if ((((int)((uint)(byte)*param_1 << 0x1c) < 0) && (param_2 != 0x70)) && (iVar2 != 0)) {
    uVar4 = 2;
    iVar3 = iVar3 + 0x11;
  }
  FUN_080011d0(param_1,iVar2,iVar3,uVar4);
  return;
}

