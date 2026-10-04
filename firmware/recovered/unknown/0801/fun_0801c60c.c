/**
 * @brief fun_0801c60c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c60c, Ghidra name FUN_0801c60c, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c60c(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_08012f04(param_1);
  iVar2 = DAT_0801c64c;
  uVar1 = (undefined1)iVar3;
  if (param_1 < 0xfb) {
    if (param_1 == 0) {
      *(undefined1 *)(DAT_0801c64c + 8) = uVar1;
    }
    else {
      *(undefined1 *)(DAT_0801c64c + 8) = uVar1;
      if (iVar3 == 3) {
        *(uint *)(iVar2 + 4) = (uint)*(ushort *)(DAT_0801c650 + (param_1 - 0x6a) * 2);
      }
      else {
        *(uint *)(iVar2 + 4) = (uint)*(ushort *)(DAT_0801c650 + (param_1 - 1) * 2);
      }
    }
  }
  else {
    *(undefined1 *)(DAT_0801c64c + 8) = uVar1;
    *(uint *)(iVar2 + 4) = param_1;
  }
  FUN_08007bf0();
  return;
}

