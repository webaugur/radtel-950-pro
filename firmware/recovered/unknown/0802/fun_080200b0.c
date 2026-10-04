/**
 * @brief fun_080200b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080200b0, Ghidra name FUN_080200b0, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080200b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_080200f4;
  uVar2 = FUN_08000ea6(*(undefined4 *)
                        ((uint)*(byte *)(DAT_080200f4 + 5) * 0xc + 8 + *(int *)(DAT_080200f4 + 10)))
  ;
  if (2 < uVar2) {
    if (param_1 == 0) {
      if (*(char *)(iVar1 + 3) != '\0') {
        *(char *)(iVar1 + 3) = *(char *)(iVar1 + 3) + -1;
        return;
      }
      *(char *)(iVar1 + 3) = (char)uVar2 + -1;
      return;
    }
    uVar3 = *(byte *)(iVar1 + 3) + 1;
    *(char *)(iVar1 + 3) = (char)uVar3 - (char)uVar2 * (char)(uVar3 / uVar2);
  }
  return;
}

