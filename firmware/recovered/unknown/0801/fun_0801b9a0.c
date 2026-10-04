/**
 * @brief fun_0801b9a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b9a0, Ghidra name FUN_0801b9a0, 76 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b9a0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_0801b9ec;
  uVar2 = 0x80;
  do {
    FUN_08012ae2(uVar1,0x400);
    if ((uVar2 & param_1) == 0) {
      FUN_08012ae2(uVar1,0x800);
    }
    else {
      FUN_08012ae6(uVar1,0x800);
    }
    FUN_0800ad22(5);
    FUN_08012ae6(uVar1,0x400);
    FUN_0800ad22(5);
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  return;
}

