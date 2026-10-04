/**
 * @brief fun_08025d64
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025d64, Ghidra name thunk_FUN_08027588, 4 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_08027588(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = ram0x080275f8;
  if (param_1 == 0xd) {
    *(undefined4 *)(ram0x080275f8 + 4) = 0;
  }
  else {
    if (param_1 == 10) {
      *(int *)(ram0x080275f8 + 8) = *(int *)(ram0x080275f8 + 8) + 1;
      return;
    }
    if (param_1 == 9) {
      *(uint *)(ram0x080275f8 + 0xc) = (uint)(*(int *)(ram0x080275f8 + 0xc) == 0);
      return;
    }
    if ((0xf < *(uint *)(ram0x080275f8 + 4)) && (*(uint *)(ram0x080275f8 + 8) < 5)) {
      *(uint *)(ram0x080275f8 + 8) = *(uint *)(ram0x080275f8 + 8) + 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    uVar3 = *(uint *)(iVar1 + 8);
    if ((uVar3 < 5) && (uVar2 = *(uint *)(iVar1 + 4), uVar2 < 0x10)) {
      *(char *)(uVar3 * 0x11 + DWORD_080275fc + uVar2) = (char)param_1;
      *(bool *)(DWORD_080275fc + 0x55 + uVar3 * 0x10 + uVar2) = *(int *)(iVar1 + 0xc) != 0;
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      return;
    }
  }
  return;
}

