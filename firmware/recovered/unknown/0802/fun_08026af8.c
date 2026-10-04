/**
 * @brief fun_08026af8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026af8, Ghidra name FUN_08026af8, 98 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08026af8(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *local_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uVar5 = 0;
  uVar4 = *param_1 - 0x20;
  iVar3 = DAT_08026b5c;
  if (uVar4 < 0x5f) {
    iVar3 = DAT_08026b5c + uVar4 * 0x10;
  }
  if (*param_1 != 0x3a) {
    local_20 = param_1;
    iStack_1c = param_2;
    uStack_18 = param_3;
    local_14 = param_4;
    FUN_08021824(iVar3,param_2,0x10);
    do {
      iVar3 = param_2 + uVar5;
      bVar2 = *(char *)(iVar3 + 8) << 1;
      *(byte *)(iVar3 + 8) = bVar2;
      bVar1 = *(byte *)(param_2 + uVar5);
      if ((int)((uint)bVar1 << 0x18) < 0) {
        *(byte *)(iVar3 + 8) = bVar2 | 1;
      }
      *(byte *)(param_2 + uVar5) = bVar1 << 1;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 8);
    return CONCAT44(iStack_1c,local_20);
  }
  local_20 = _BYTE_ARRAY_08026b60;
  iStack_1c = DAT_08026b64;
  uStack_18 = _BYTE_ARRAY_08026b68;
  local_14 = DAT_08026b6c;
  FUN_08000ee4(param_2,&local_20,0x10);
  return CONCAT44(iStack_1c,local_20);
}

