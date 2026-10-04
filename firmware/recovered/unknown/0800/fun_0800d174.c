/**
 * @brief fun_0800d174
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d174, Ghidra name FUN_0800d174, 88 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d174(int param_1)

{
  undefined1 auStack_1c [20];
  
  FUN_0800a1c4(0);
  if (param_1 == 0) {
    FUN_08000850(auStack_1c,s_Hardware_BJ9000_0800d1e0);
  }
  else {
    FUN_08000850(auStack_1c,s_Hardware_UV850PRO_0800d1cc);
  }
  FUN_080154a4(0,0xf0,0x89,0xa2,1,0);
  FUN_08014d88(0x89,9,auStack_1c,0x18,0,0xffff);
  FUN_08015500();
  FUN_0800ad06(1000);
  return;
}

