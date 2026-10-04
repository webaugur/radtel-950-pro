/**
 * @brief fun_08014a70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014a70, Ghidra name FUN_08014a70, 218 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014a70(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  for (iVar5 = 0; uVar3 = (uint)*(byte *)(param_3 + iVar5), uVar3 != 0; iVar5 = iVar5 + 1) {
    iVar4 = 8;
    bVar1 = false;
    bVar2 = false;
    if (uVar3 - 0x30 < 10) {
      FUN_08000ee4(&local_124,*(undefined4 *)(DAT_08014b4c + (uVar3 - 0x30) * 4),0xc0);
    }
    else if (uVar3 == 0x2e) {
      local_124 = *DAT_08014b50;
      local_120 = DAT_08014b50[1];
      local_11c = DAT_08014b50[2];
      bVar2 = true;
      iVar4 = 6;
    }
    else if (uVar3 == 0x2d) {
      FUN_08000ee4(&local_124,DAT_08014b54,0xc0);
    }
    else if (uVar3 == 0x4b) {
      iVar4 = 10;
      FUN_08000ee4(&local_124,DAT_08014b58,0xf0);
    }
    else if (uVar3 == 0x2b) {
      FUN_08000ee4(&local_124,DAT_08014b5c,0x10);
      bVar2 = true;
    }
    else {
      bVar1 = true;
      FUN_08027990(local_34,param_2,8,0xc,0);
    }
    if (!bVar1) {
      if (bVar2) {
        FUN_08027a94(local_34,param_2,iVar4,0xc,&local_124,0,0xffff);
      }
      else {
        FUN_08027b14(local_34,param_2,iVar4,0xc,&local_124);
      }
    }
    param_2 = param_2 + 1 + iVar4 & 0xffff;
  }
  return;
}

