/**
 * @brief fun_080200f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080200f8, Ghidra name FUN_080200f8, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080200f8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_08020140;
  uVar2 = FUN_08000ea6(*(undefined4 *)
                        ((uint)*(byte *)(DAT_08020140 + 5) * 0xc + 8 + *(int *)(DAT_08020140 + 10)))
  ;
  if (2 < uVar2) {
    if (param_1 == 0) {
      if (1 < *(byte *)(iVar1 + 3)) {
        *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) - 2;
        return;
      }
      *(char *)(iVar1 + 3) = (char)uVar2 + -2;
      return;
    }
    uVar3 = *(byte *)(iVar1 + 3) + 2;
    *(char *)(iVar1 + 3) = (char)uVar3 - (char)uVar2 * (char)(uVar3 / uVar2);
  }
  return;
}

