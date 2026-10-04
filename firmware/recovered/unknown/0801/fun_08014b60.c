/**
 * @brief fun_08014b60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014b60, Ghidra name FUN_08014b60, 254 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014b60(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_414 [992];
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  FUN_08001016(auStack_414,0x3e0);
  iVar3 = DAT_08014c60;
  if (param_4 == 0x105) {
    iVar3 = DAT_08014c64;
  }
  for (iVar5 = 0; uVar2 = (uint)*(byte *)(param_3 + iVar5), uVar2 != 0; iVar5 = iVar5 + 1) {
    bVar1 = false;
    iVar4 = 0x13;
    if (uVar2 - 0x30 < 10) {
      FUN_08021824(iVar3 + (uVar2 - 0x30) * 0x3dc,auStack_414,0x3dc);
    }
    else if (uVar2 == 0x43) {
      FUN_08021824(iVar3 + 0x2698,auStack_414,0x3dc);
    }
    else if (uVar2 == 0x48) {
      FUN_08021824(iVar3 + 0x2a74,auStack_414,0x3dc);
    }
    else if (uVar2 == 0x2d) {
      FUN_08021824(iVar3 + 0x2e50,auStack_414,0x3dc);
    }
    else if (uVar2 == 0x2e) {
      iVar4 = 6;
      FUN_08021824(iVar3 + 0x322c,auStack_414,0x138);
    }
    else {
      bVar1 = true;
      FUN_08014114(local_34,param_2,0x13,0x1a,param_4,0x1a);
    }
    if (!bVar1) {
      FUN_08027b14(local_34,param_2,iVar4,0x1a,auStack_414);
    }
    uVar2 = param_2 + iVar4 & 0xffff;
    FUN_08014114(local_34,uVar2,3,0x1a,param_4,0x1a);
    param_2 = uVar2 + 3 & 0xffff;
  }
  return;
}

