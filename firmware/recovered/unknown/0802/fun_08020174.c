/**
 * @brief fun_08020174
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020174, Ghidra name FUN_08020174, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020174(void)

{
  int iVar1;
  
  iVar1 = DAT_080201e4;
  if (*(char *)(DAT_080201e0 + 0x17) != '\x01') {
    if (*(char *)(DAT_080201e0 + 0x17) == '\x02') {
      FUN_08021ab0();
      FUN_0801bc50();
      FUN_0801c02c();
      FUN_0801c150(4);
      FUN_0801c3b0(3);
      FUN_0800ad06(0x14);
      FUN_080207ec(9);
      FUN_0801bf40();
      FUN_080207ec(10);
      FUN_0800ad06(0x1e);
      FUN_0801c150(2);
      FUN_0801c3b0(0);
      FUN_0801bd0c();
      FUN_0801c03c();
      *(undefined2 *)(iVar1 + 9) = 4;
    }
    return;
  }
  FUN_0800d7f0();
  *(undefined2 *)(iVar1 + 9) = 4;
  return;
}

