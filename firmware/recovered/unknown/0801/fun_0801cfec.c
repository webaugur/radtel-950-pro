/**
 * @brief fun_0801cfec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cfec, Ghidra name FUN_0801cfec, 138 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801cfec(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = DAT_0801d078;
  *(undefined1 *)(*(int *)(DAT_0801d078 + 4) + DAT_0801d078 + 0x12) = 0;
  if (*(int *)(iVar1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08000bb0();
  }
  iVar1 = DAT_0801d07c;
  if (param_1 == 0) {
    if (0xb4 < uVar2) {
      FUN_08017d40(1);
      return 4;
    }
    *(ushort *)(DAT_0801d07c + 0xc) = *(ushort *)(DAT_0801d07c + 0xc) & 0xff | uVar2 << 8;
    if (uVar2 == 0xb4) {
      *(undefined1 *)(iVar1 + 0xe) = 0;
      *(undefined2 *)(iVar1 + 0xc) = 0xb400;
      FUN_08018038();
      return 9;
    }
  }
  else {
    if (param_1 != 1) {
      if (uVar2 < 0x3c) {
        *(char *)(DAT_0801d07c + 0xe) = (char)uVar2;
        FUN_08018038();
        return 9;
      }
      FUN_08017d40(3);
      return 4;
    }
    if (0x3b < uVar2) {
      FUN_08017d40(2);
      return 4;
    }
    *(ushort *)(DAT_0801d07c + 0xc) = *(ushort *)(DAT_0801d07c + 0xc) & 0xff00 | uVar2;
  }
  FUN_08018038();
  return 6;
}

