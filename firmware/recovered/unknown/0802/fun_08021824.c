/**
 * @brief fun_08021824
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021824, Ghidra name FUN_08021824, 98 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021824(uint param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar1 = DAT_08021888;
  FUN_08012ae2(DAT_08021888,0x1000);
  FUN_0800ad22(1);
  FUN_080218d8(3);
  FUN_080218d8((param_1 & 0xffffff) >> 0x10);
  FUN_080218d8((param_1 & 0xffff) >> 8);
  FUN_080218d8(param_1 & 0xff);
  for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1 & 0xffff) {
    uVar2 = FUN_080217d0();
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  }
  FUN_08012ae6(uVar1,0x1000);
  FUN_0800ad22(1);
  return;
}

