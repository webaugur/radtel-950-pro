/**
 * @brief fun_0801b790
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b790, Ghidra name FUN_0801b790, 328 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b790(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_08008aa8();
  iVar2 = DAT_0801b87c;
  iVar1 = DAT_0801b878;
  if ((iVar3 != 0) || (uVar4 = param_1[1], 0xa0 < uVar4)) {
    return;
  }
  if ((*(char *)(DAT_0801b878 + 0x32) == '\x01') && ((int)((uint)(byte)*param_1 << 0x18) < 0)) {
    thunk_FUN_0801c4d0(0);
    FUN_0801aba4(0);
    FUN_0801c6fc();
    FUN_080207ec(10);
    *(undefined1 *)(iVar1 + 0x32) = 0;
    return;
  }
  if (2 < *(byte *)(DAT_0801b878 + 4)) {
    return;
  }
  if ((int)(*param_1 << 0x18) < 0) {
    return;
  }
  if (*(char *)(DAT_0801b878 + 0x32) == '\x01') {
    return;
  }
  if (uVar4 == 0x13) {
LAB_0801b842:
    uVar4 = 0xb;
  }
  else {
    if ((int)uVar4 < 0x14) {
      if (uVar4 == 0x10) {
        uVar4 = *param_1 & 0xf;
        goto LAB_0800d780;
      }
      if ((int)uVar4 < 0x11) {
        if ((uVar4 != 5) && (uVar4 != 8)) {
          return;
        }
        if (3 < *(byte *)(DAT_0801b87c + 0x1e)) {
          *(undefined1 *)(DAT_0801b87c + 0x1e) = 3;
        }
        uVar4 = (uint)(byte)(*(char *)(iVar2 + 0x1e) + 0x11);
        goto LAB_0800d780;
      }
      if (uVar4 != 0x11) {
        if (uVar4 != 0x12) {
          return;
        }
        uVar4 = 0xd;
        goto LAB_0800d780;
      }
    }
    else {
      if (uVar4 == 0x18) {
        uVar4 = 0xf;
        goto LAB_0800d780;
      }
      if ((int)uVar4 < 0x19) {
        if (uVar4 == 0x15) {
          uVar4 = 0xc;
        }
        else {
          if (uVar4 != 0x17) {
            return;
          }
          uVar4 = 0xe;
        }
        goto LAB_0800d780;
      }
      if (uVar4 != 0x1a) {
        if (uVar4 != 0x1f) {
          return;
        }
        goto LAB_0801b842;
      }
    }
    uVar4 = 10;
  }
LAB_0800d780:
  if (uVar4 < 0x11) {
    FUN_0801aba4(1);
  }
  else {
    FUN_0801c73c(1);
  }
  if (((*(byte *)(DAT_0800d7e4 + 9) & 1) != 0) && (FUN_080207ec(9), uVar4 < 0x11)) {
    FUN_0801c150(4);
    FUN_0801c3b0(1);
  }
  if (uVar4 < 0x11) {
    thunk_FUN_0801c4d0(*(undefined2 *)(DAT_0800d7e8 + 10 + uVar4 * 4),
                       *(undefined2 *)(DAT_0800d7e8 + 10 + uVar4 * 4 + 2));
  }
  else {
    thunk_FUN_0801c654(*(undefined1 *)(DAT_0800d7e8 + uVar4 + -0x11));
  }
  *(undefined1 *)(DAT_0800d7ec + 0x32) = 1;
  return;
}

