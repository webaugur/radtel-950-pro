/**
 * @brief fun_08027558
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027558, Ghidra name FUN_08027558, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027558(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(DWORD_08027580 + 3);
  if (param_1 == 0) {
    *(undefined1 *)(DWORD_08027584 + 0x17) = uVar1;
  }
  else if (param_1 == 1) {
    *(undefined1 *)(DWORD_08027584 + 0x31) = uVar1;
  }
  else if (param_1 == 2) {
    *(undefined1 *)(DWORD_08027584 + 0x38) = uVar1;
  }
  FUN_08018038();
  return;
}

