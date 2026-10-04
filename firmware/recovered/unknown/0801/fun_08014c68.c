/**
 * @brief fun_08014c68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014c68, Ghidra name FUN_08014c68, 270 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014c68(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_110 [220];
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  FUN_08001016(auStack_110,0xdc);
  iVar3 = DAT_08014d78;
  if (param_4 == 0x105) {
    iVar3 = DAT_08014d7c;
  }
  for (iVar5 = 0; uVar2 = (uint)*(byte *)(param_3 + iVar5), uVar2 != 0; iVar5 = iVar5 + 1) {
    bVar1 = false;
    iVar4 = 8;
    if (uVar2 - 0x30 < 10) {
      FUN_08021824(iVar3 + (uVar2 - 0x30) * 0xc0,auStack_110,0xc0);
    }
    else if (uVar2 == 0x2d) {
      FUN_08021824(iVar3 + 0x780,auStack_110,0xc0);
    }
    else if (uVar2 == 0x56) {
      FUN_08021824(iVar3 + 0x840,auStack_110,0xd8);
      iVar4 = 9;
    }
    else if (uVar2 == 0x46) {
      FUN_08021824(iVar3 + 0x918,auStack_110,0xd8);
      iVar4 = 9;
    }
    else if (uVar2 == 0x4f) {
      FUN_08021824(iVar3 + 0x9f0,auStack_110,0xd8);
      iVar4 = 9;
    }
    else if (uVar2 == 0x43) {
      FUN_08000ee4(auStack_110,DAT_08014d80,0xc0);
    }
    else if (uVar2 == 0x48) {
      FUN_08000ee4(auStack_110,DAT_08014d84,0xc0);
    }
    else {
      bVar1 = true;
      FUN_08014114(local_34,param_2,8,0xc,param_4,0x28);
    }
    if ((!bVar1) && (FUN_08027b14(local_34,param_2,iVar4,0xc,auStack_110), iVar4 == 8)) {
      FUN_08014114(local_34,param_2 + 8 & 0xffff,1,0xc,param_4,0x28);
    }
    param_2 = param_2 + 10 & 0xffff;
  }
  return;
}

