/**
 * @brief fun_0800af94
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800af94, Ghidra name FUN_0800af94, 184 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800af94(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0800b050;
  uVar3 = (uint)*(byte *)(DAT_0800b050 + 0xfa);
  if (*(char *)(DAT_0800b04c + 1) == '\x03') {
    uVar1 = *(undefined2 *)(DAT_0800b050 + 0x108);
  }
  else {
    uVar1 = *(undefined2 *)(DAT_0800b050 + uVar3 * 2 + 0x102);
  }
  if (*(char *)(DAT_0800b04c + 0x1e) == '\0') {
    if (uVar3 == 0) {
      FUN_0800b05c(0,0,*(undefined1 *)(DAT_0800b054 + 0xd));
      FUN_0800b328(0,uVar1);
      FUN_08015500();
      FUN_0800c710(0,0,0,1);
    }
    else if (uVar3 == 2) {
      FUN_0800b05c(0,2,*(undefined1 *)(DAT_0800b054 + 0xf));
      FUN_0800b328(0,uVar1,2);
      FUN_08015500();
      FUN_0800c710(0,0,2,1);
    }
    else {
      FUN_0800b05c(0,1,*(undefined1 *)(DAT_0800b054 + 0xe));
      FUN_0800b328(0,uVar1,1);
      FUN_08015500();
      FUN_0800c710(0,0,1);
    }
  }
  else {
    FUN_0800b604(0);
  }
  *DAT_0800b058 = 0xffff;
  FUN_0800cb78(*(undefined1 *)(iVar2 + 0xfa),0);
  return;
}

