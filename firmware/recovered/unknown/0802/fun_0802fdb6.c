/**
 * @brief fun_0802fdb6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802fdb6, Ghidra name FUN_0802fdb6, 58 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802fdb6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r11;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  undefined4 *puVar2;
  undefined4 in_cr4;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  coprocessor_function2(3,0xe,7,in_cr14,in_cr4,in_cr10);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = unaff_r4;
  param_1[3] = &DAT_08030194;
  param_1[4] = unaff_r7;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = unaff_r4;
  param_1[8] = &DAT_08030194;
  param_1[9] = unaff_r7;
  puVar2 = param_1 + 10;
  *puVar2 = puVar2;
  param_1[0xb] = param_2;
  param_1[0xc] = &stack0x000003b0;
  param_1[0xd] = unaff_r7;
  *puVar2 = puVar2;
  param_1[0xb] = param_4;
  param_1[0xc] = unaff_r4;
  param_1[0xd] = &DAT_08030194;
  param_1[0xe] = unaff_r7;
  *puVar2 = param_2;
  param_1[0xb] = param_4;
  param_1[0xc] = unaff_r4;
  param_1[0xd] = &DAT_08030194;
  param_1[0xe] = unaff_r7;
  puVar2 = param_1 + 0xf;
  *puVar2 = puVar2;
  param_1[0x10] = &stack0x000003b0;
  param_1[0x11] = unaff_r7;
  *puVar2 = param_4;
  param_1[0x10] = unaff_r4;
  param_1[0x11] = &DAT_08030194;
  param_1[0x12] = unaff_r7;
  puVar2 = param_1 + 0x13;
  *puVar2 = puVar2;
  param_1[0x14] = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  param_1[0x17] = unaff_r4;
  param_1[0x18] = &DAT_08030194;
  param_1[0x19] = unaff_r7;
  *puVar2 = param_2;
  param_1[0x14] = &stack0x000003b0;
  param_1[0x15] = unaff_r7;
  param_1[0x16] = param_3;
  param_1[0x17] = &stack0x000003b0;
  param_1[0x18] = unaff_r7;
  puVar2 = param_1 + 0x19;
  *puVar2 = puVar2;
  param_1[0x1a] = param_2;
  param_1[0x1b] = param_4;
  param_1[0x1c] = unaff_r4;
  param_1[0x1d] = &DAT_08030194;
  param_1[0x1e] = unaff_r7;
  *puVar2 = param_2;
  param_1[0x1a] = param_3;
  param_1[0x1b] = param_4;
  param_1[0x1c] = unaff_r4;
  param_1[0x1d] = &DAT_08030194;
  param_1[0x1e] = unaff_r7;
  puVar2 = param_1 + 0x1f;
  *puVar2 = puVar2;
  param_1[0x20] = param_2;
  param_1[0x21] = param_3;
  param_1[0x22] = unaff_r4;
  param_1[0x23] = &DAT_08030194;
  param_1[0x24] = unaff_r7;
  *puVar2 = puVar2;
  param_1[0x20] = param_3;
  param_1[0x21] = param_4;
  param_1[0x22] = unaff_r4;
  param_1[0x23] = &DAT_08030194;
  param_1[0x24] = unaff_r7;
  param_1[0xcc] = unaff_lr;
  param_1[0xcd] = param_2;
  uVar1 = func_0x081e0da0();
  coprocessor_storelong(0xe,in_cr14,unaff_r7);
  func_0x085eb4e8(uVar1,_DAT_08030194);
  coprocessor_load(4,in_cr15,unaff_r11 + 0x2ec);
  uVar1 = func_0x083eaf38();
  coprocessor_storelong(0xb,in_cr14,unaff_pc);
  coprocessor_load(0,in_cr15,unaff_r8);
  func_0x082e786c(uVar1,&stack0x000002e8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

