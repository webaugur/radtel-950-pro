/**
 * @brief fun_0800323c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800323c, Ghidra name FUN_0800323c, 100 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800323c(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 < 10) {
    *(uint *)(param_1 + 0x10) =
         *(uint *)(param_1 + 0x10) & ~(7 << (param_2 * 3 & 0xff)) | param_4 << (param_2 * 3 & 0xff);
  }
  else {
    uVar1 = (param_2 - 10) * 3;
    *(uint *)(param_1 + 0xc) =
         *(uint *)(param_1 + 0xc) & ~(7 << (uVar1 & 0xff)) | param_4 << (uVar1 & 0xff);
  }
  if (param_3 < 7) {
    uVar1 = (param_3 - 1) * 5;
    *(uint *)(param_1 + 0x34) =
         *(uint *)(param_1 + 0x34) & ~(0x1f << (uVar1 & 0xff)) | param_2 << (uVar1 & 0xff);
    return;
  }
  if (param_3 < 0xd) {
    uVar1 = (param_3 - 7) * 5;
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) & ~(0x1f << (uVar1 & 0xff)) | param_2 << (uVar1 & 0xff);
    return;
  }
  uVar1 = (param_3 - 0xd) * 5;
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & ~(0x1f << (uVar1 & 0xff)) | param_2 << (uVar1 & 0xff);
  return;
}

