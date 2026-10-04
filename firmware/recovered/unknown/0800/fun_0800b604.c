/**
 * @brief fun_0800b604
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b604, Ghidra name FUN_0800b604, 654 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b604(int param_1)

{
  int iVar1;
  int iVar2;
  
  *DAT_0800b894 = 0xffff;
  FUN_0800c710(0,0,0,1);
  FUN_0801537c(0,0x74,0xf0,0xffff);
  iVar1 = DAT_0800b898;
  if (param_1 == 1) {
    FUN_0800cb78(*(undefined1 *)(DAT_0800b898 + 0xfa),1);
  }
  else {
    FUN_0800cb78(0);
  }
  iVar2 = DAT_0800b89c;
  if (param_1 == 3) {
    if ((*(char *)(iVar1 + 0xfa) == '\0') || (*(char *)(iVar1 + 0xfa) == '\x01')) {
      if (*(char *)(iVar1 + 0x130) == '\x01') {
        FUN_0800b05c(0,0,*(undefined1 *)(DAT_0800b89c + 0xd));
        FUN_0800b328(0,*(undefined2 *)(iVar1 + 0x102));
        FUN_08015500();
      }
      else {
        FUN_0800b05c(0,0,3);
        FUN_0800b328(0,0xffff);
        FUN_08015500();
      }
    }
    FUN_0801537c(0,0xcd,0xf0,0xffff);
    if ((*(char *)(iVar1 + 0xfa) == '\x01') || (*(char *)(iVar1 + 0xfa) == '\x02')) {
      FUN_0800cb78(1,0);
      FUN_0800c710(0,0,1);
      if (*(char *)(iVar1 + 0x188) == '\x01') {
        FUN_0800b05c(0,1,*(undefined1 *)(iVar2 + 0xe));
        FUN_0800b328(0,*(undefined2 *)(iVar1 + 0x104),1);
        FUN_08015500();
      }
      else {
        FUN_0800b05c(0,1,3);
        FUN_0800b328(0,0xffff,1);
        FUN_08015500();
      }
    }
    if ((*(char *)(iVar1 + 0xfa) == '\x02') || (*(char *)(iVar1 + 0xfa) == '\0')) {
      FUN_0800cb78(2,0);
      FUN_0800c710(0,0,2,1);
      if (*(char *)(iVar1 + 0x1e0) == '\x01') {
        FUN_0800b05c(0,2,*(undefined1 *)(iVar2 + 0xf));
        FUN_0800b328(0,*(undefined2 *)(iVar1 + 0x106),2);
        FUN_08015500();
        return;
      }
      FUN_0800b05c(0,2,3);
      FUN_0800b328(0,0xffff,2);
      FUN_08015500();
      return;
    }
  }
  else {
    if (((*(char *)(iVar1 + 0xfa) == '\0') || (param_1 == 0)) || (param_1 == 2)) {
      if (*(char *)(iVar1 + 0x130) == '\x01') {
        FUN_0800b05c(param_1,0,*(undefined1 *)(DAT_0800b89c + 0xd));
        FUN_0800b328(param_1,*(undefined2 *)(iVar1 + 0x102),0);
        FUN_08015500();
      }
      else {
        FUN_0800b05c(param_1,0,3);
        FUN_0800b328(param_1,0xffff,0);
        FUN_08015500();
      }
    }
    if (((*(char *)(iVar1 + 0xfa) == '\x01') || (param_1 == 0)) || (param_1 == 2)) {
      if (param_1 != 1) {
        FUN_0800cb78(1,0);
        FUN_0800c710(0,0,1);
      }
      if (*(char *)(iVar1 + 0x188) == '\x01') {
        FUN_0800b05c(param_1,1,*(undefined1 *)(iVar2 + 0xe));
        FUN_0800b328(param_1,*(undefined2 *)(iVar1 + 0x104),1);
        FUN_08015500();
      }
      else {
        FUN_0800b05c(param_1,1,3);
        FUN_0800b328(param_1,0xffff,1);
        FUN_08015500();
      }
    }
    if (param_1 != 1) {
      FUN_0801537c(0,0xcd,0xf0,0xffff);
    }
    if (((*(char *)(iVar1 + 0xfa) == '\x02') || (param_1 == 0)) || (param_1 == 2)) {
      if (param_1 != 1) {
        FUN_0800cb78(2,0);
        FUN_0800c710(0,0,2,1);
      }
      if (*(char *)(iVar1 + 0x1e0) == '\x01') {
        FUN_0800b05c(param_1,2,*(undefined1 *)(iVar2 + 0xf));
        FUN_0800b328(param_1,*(undefined2 *)(iVar1 + 0x106),2);
        FUN_08015500();
        return;
      }
      FUN_0800b05c(param_1,2,3);
      FUN_0800b328(param_1,0xffff,2);
      FUN_08015500();
      return;
    }
  }
  return;
}

