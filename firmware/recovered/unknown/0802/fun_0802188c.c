/**
 * @brief fun_0802188c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802188c, Ghidra name FUN_0802188c, 70 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0802188c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_080218d4;
  if (param_1 == 2) {
    uVar2 = 0x35;
  }
  else if (param_1 == 3) {
    uVar2 = 0x15;
  }
  else {
    uVar2 = 5;
  }
  FUN_08012ae2(DAT_080218d4,0x1000);
  FUN_0800ad22(1);
  FUN_080218d8(uVar2);
  uVar2 = FUN_080217d0();
  FUN_08012ae6(uVar1,0x1000);
  FUN_0800ad22(1);
  return uVar2;
}

