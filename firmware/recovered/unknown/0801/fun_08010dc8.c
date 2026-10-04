/**
 * @brief fun_08010dc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010dc8, Ghidra name FUN_08010dc8, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010dc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(char *)(DAT_08010e10 + 0x21) != '\x01') {
    FUN_08000850(&local_c,&DAT_08010e14,param_3,param_4,param_2);
    FUN_08027b14(0x47,0xc6,0x1d,0xc,DAT_08010e18);
    return;
  }
  FUN_08000850(&local_c,&DAT_08010e20,*(byte *)(DAT_08010e1c + 0x10) + 1,param_4,param_2);
  FUN_08014a70(0x47,0xbd,&local_c,0);
  return;
}

