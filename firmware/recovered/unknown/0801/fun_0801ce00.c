/**
 * @brief fun_0801ce00
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ce00, Ghidra name FUN_0801ce00, 138 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801ce00(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = DAT_0801ce8c;
  *(undefined1 *)(*(int *)(DAT_0801ce8c + 4) + DAT_0801ce8c + 0x12) = 0;
  if (*(int *)(iVar1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08000bb0();
  }
  iVar1 = DAT_0801ce90;
  if (param_1 == 0) {
    if (0x5a < uVar2) {
      FUN_08017d40(4);
      return 4;
    }
    *(ushort *)(DAT_0801ce90 + 8) = *(ushort *)(DAT_0801ce90 + 8) & 0xff | uVar2 << 8;
    if (uVar2 == 0x5a) {
      *(undefined1 *)(iVar1 + 10) = 0;
      *(undefined2 *)(iVar1 + 8) = 0x5a00;
      FUN_08018038();
      return 9;
    }
  }
  else {
    if (param_1 != 1) {
      if (uVar2 < 0x3c) {
        *(char *)(DAT_0801ce90 + 10) = (char)uVar2;
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
    *(ushort *)(DAT_0801ce90 + 8) = *(ushort *)(DAT_0801ce90 + 8) & 0xff00 | uVar2;
  }
  FUN_08018038();
  return 6;
}

