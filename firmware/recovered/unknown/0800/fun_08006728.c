/**
 * @brief fun_08006728
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006728, Ghidra name FUN_08006728, 94 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006728(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_94 [128];
  
  FUN_08001016(auStack_94,0x80);
  iVar1 = (uint)*(byte *)(DAT_08006788 + 0x12) +
          (uint)*(byte *)(DAT_08006788 + 0x11) * 0x100 + 0x10000;
  iVar2 = DAT_08006788 + 0x14;
  if (param_1 == 0) {
    if (iVar1 == 0x10000) {
      FUN_08000ee4(auStack_94,DAT_0800678c,0x79);
    }
    FUN_0802025c(auStack_94,iVar2,0x80);
  }
  else {
    FUN_0802025c(iVar2,auStack_94,0x80);
    if (iVar1 == 0x10000) {
      FUN_08000ee4(DAT_0800678c,auStack_94,0x79);
      FUN_0800fda8();
    }
  }
  return;
}

