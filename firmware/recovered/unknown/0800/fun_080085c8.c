/**
 * @brief fun_080085c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080085c8, Ghidra name FUN_080085c8, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080085c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0800863c;
  iVar2 = FUN_0801ffdc(*(undefined2 *)(DAT_0800863c + 0x108),param_1);
  *(short *)(iVar1 + 0x108) = (short)iVar2;
  if (iVar2 != 0xffff) {
    FUN_08008488(param_1,param_2,0);
    if (param_1 == 0) {
      FUN_0800af94(1);
    }
    else {
      FUN_0800c16c();
    }
    FUN_0801c9a0();
    return;
  }
  if ((*(char *)(DAT_08008640 + 0x4a) == -0x5b) && (*(char *)(iVar1 + 0xfa) == '\x02')) {
    FUN_080158b0(DAT_08008648,*(undefined1 *)(DAT_08008644 + 2),0);
    return;
  }
  FUN_080158b0(DAT_0800863c + 0xfe,*(undefined1 *)((uint)*(byte *)(iVar1 + 0xfa) + DAT_08008644),0);
  return;
}

