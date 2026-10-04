/**
 * @brief fun_08008970
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008970, Ghidra name FUN_08008970, 108 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008970(void)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pbVar1 = DAT_080089dc;
  FUN_0800864c(0,1,*(undefined2 *)(DAT_080089dc + 8));
  FUN_0800864c(1,1,*(undefined2 *)(pbVar1 + 10));
  FUN_0800864c(2,1,*(undefined2 *)(pbVar1 + 0xc));
  *(undefined2 *)(pbVar1 + 0xe) = *(undefined2 *)(pbVar1 + (uint)*pbVar1 * 2 + 8);
  pbVar2 = DAT_080089e0;
  *DAT_080089e0 = pbVar1[(uint)*pbVar1 * 0x58 + 0x36];
  FUN_080089e8();
  if (*pbVar2 == 1) {
    uVar3 = 0x3b;
  }
  else {
    uVar3 = 0x3c;
  }
  if (*(char *)(DAT_080089e4 + 1) != '\x01') {
    FUN_080234ac(uVar3);
  }
  FUN_0801c9a0();
  return;
}

