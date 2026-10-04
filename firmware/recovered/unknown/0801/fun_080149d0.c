/**
 * @brief fun_080149d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080149d0, Ghidra name FUN_080149d0, 146 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080149d0(undefined4 param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_3fc [988];
  
  for (iVar4 = 0; uVar2 = (uint)*(byte *)(param_3 + iVar4), uVar2 != 0; iVar4 = iVar4 + 1) {
    iVar3 = 0x13;
    bVar1 = false;
    if (uVar2 - 0x30 < 10) {
      FUN_08000ee4(auStack_3fc,*(undefined4 *)(DAT_08014a64 + (uVar2 - 0x30) * 4),0x3dc);
    }
    else if (uVar2 == 0x2e) {
      FUN_08000ee4(auStack_3fc,DAT_08014a68,0xd0);
      iVar3 = 4;
    }
    else if (uVar2 == 0x2d) {
      FUN_08000ee4(auStack_3fc,DAT_08014a6c,0x3dc);
    }
    else {
      bVar1 = true;
      FUN_08027990(param_1,param_2,0x13,0x1a,0);
    }
    if (!bVar1) {
      FUN_08027b14(param_1,param_2,iVar3,0x1a,auStack_3fc);
    }
    param_2 = param_2 + 3 + iVar3 & 0xffff;
  }
  return;
}

