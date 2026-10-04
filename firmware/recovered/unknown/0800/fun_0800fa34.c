/**
 * @brief fun_0800fa34
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fa34, Ghidra name FUN_0800fa34, 186 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fa34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_0800faf0;
  uVar3 = FUN_0800f378(0xb000,8,param_3,param_4,param_4);
  puVar2 = DAT_0800faf4;
  if (uVar3 < 0x19) {
    FUN_08021824(uVar3 * 0xa0 + 0xb010,iVar1,0xa0);
    uVar3 = (uint)*(ushort *)(iVar1 + 0x9e);
    uVar4 = FUN_0800a878(iVar1,0x9e);
    if (uVar4 == (uVar3 & 0xffff)) {
      FUN_08000ee4(puVar2,iVar1,0x99);
      if (4 < *(byte *)((int)puVar2 + 0x97)) {
        *(undefined1 *)((int)puVar2 + 0x97) = 2;
      }
      if (5 < *(byte *)(puVar2 + 0x4b)) {
        *(undefined1 *)(puVar2 + 0x4b) = 5;
      }
      return;
    }
  }
  *puVar2 = 0;
  puVar2[0x11] = 0;
  *(undefined2 *)((int)puVar2 + 0x45) = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  *(undefined1 *)(puVar2 + 0x21) = 0;
  *(undefined1 *)((int)puVar2 + 0x95) = 0;
  *(undefined1 *)((int)puVar2 + 0x21) = 0;
  FUN_08000fd2(iVar1,0xa0);
  FUN_08000ee4(iVar1,DAT_0800faf4,0x99);
  uVar5 = FUN_0800a878(iVar1,0x9e);
  *(short *)(iVar1 + 0x9e) = (short)uVar5;
  FUN_08021764(0xb000);
  FUN_080219b8(0xb010,iVar1,0xa0,uVar5);
  return;
}

