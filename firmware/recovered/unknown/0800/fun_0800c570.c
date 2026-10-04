/**
 * @brief fun_0800c570
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c570, Ghidra name FUN_0800c570, 378 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c570(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  
  local_20 = DAT_0800c6ec;
  FUN_0800cb78(0);
  iVar2 = DAT_0800c6f4;
  iVar1 = DAT_0800c6f0;
  if (*(char *)(DAT_0800c6f0 + 0x130) == '\x01') {
    FUN_0800b05c(0,0,*(undefined1 *)(DAT_0800c6f4 + 0xd));
    FUN_0800b328(0,*(undefined2 *)(iVar1 + 0x102));
  }
  else {
    FUN_0800b05c(0,0,3);
    FUN_0800b328(0,0xffff);
  }
  FUN_08015500();
  uVar4 = DAT_0800c700;
  uVar5 = DAT_0800c6fc;
  iVar3 = DAT_0800c6f8;
  if (*(char *)(DAT_0800c6f8 + 0x52) == '\0') {
    FUN_08015324(0x2d,200,0x27,0x23,DAT_0800c6fc);
  }
  else {
    FUN_08015324(0x2d,200,0x27,0x23,DAT_0800c700);
  }
  FUN_0800cb78(1,0);
  if (*(char *)(iVar1 + 0x188) == '\x01') {
    FUN_0800b05c(0,1,*(undefined1 *)(iVar2 + 0xe));
    FUN_0800b328(0,*(undefined2 *)(iVar1 + 0x104),1);
  }
  else {
    FUN_0800b05c(0,1,3);
    FUN_0800b328(0,0xffff,1);
  }
  FUN_08015500();
  if (*(char *)(iVar3 + 0x52) == '\0') {
    FUN_0800c710(0,0,0,1);
    FUN_0800c710(1,*(undefined1 *)((int)&local_20 + (uint)*(byte *)(iVar3 + 0x60)),1);
    FUN_08015324(0x87,200,0x27,0x23,uVar4);
  }
  else {
    FUN_0800c710(1,*(undefined1 *)((int)&local_20 + (uint)*(byte *)(iVar3 + 0x60)),0);
    FUN_0800c710(0,0,1);
    FUN_08015324(0x87,200,0x27,0x23,uVar5);
  }
  FUN_0801537c(0,0x74,0xf0,0xffff);
  FUN_0801537c(0,0xcd,0xf0,0xffff);
  FUN_080152cc(0xce,0x59,0);
  FUN_080154a4(0x14,0xf0,0xd9,0x11a,1);
  uVar5 = DAT_0800c704;
  uVar4 = FUN_08027b14(0xd9,0x14,200,0x41);
  FUN_08015500(uVar4,uVar5,0,local_20);
  return;
}

