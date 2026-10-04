/**
 * @brief fun_0800c16c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c16c, Ghidra name FUN_0800c16c, 248 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c16c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0800c264;
  uVar2 = (uint)*(byte *)(DAT_0800c264 + 0xfa);
  if (*(char *)(DAT_0800c264 + uVar2 * 0x58 + 0x130) == '\0') {
    if (uVar2 == 0) {
      FUN_0800b05c(4,0,3);
      FUN_0800b328(4,0xffff,0);
      FUN_08015500();
      return;
    }
    if (uVar2 != 1) {
      FUN_0800b05c(4,2,3);
      FUN_0800b328(4,0xffff,2);
      FUN_08015500();
      return;
    }
    FUN_0800b05c(4,1,3);
    FUN_0800b328(4,0xffff,1);
    FUN_08015500();
    return;
  }
  if (uVar2 == 0) {
    FUN_0800b05c(4,0,*(undefined1 *)(DAT_0800c268 + 0xd));
    FUN_0800b328(4,*(undefined2 *)(iVar1 + 0x108),0);
    FUN_08015500();
    FUN_0800cb78(0);
    return;
  }
  if (uVar2 != 1) {
    FUN_0800b05c(4,2,*(undefined1 *)(DAT_0800c268 + 0xf));
    FUN_0800b328(4,*(undefined2 *)(iVar1 + 0x108),2);
    FUN_08015500();
    FUN_0800cb78(2,0);
    return;
  }
  FUN_0800b05c(4,1,*(undefined1 *)(DAT_0800c268 + 0xe));
  FUN_0800b328(4,*(undefined2 *)(iVar1 + 0x108),1);
  FUN_08015500();
  FUN_0800cb78(1,0);
  return;
}

