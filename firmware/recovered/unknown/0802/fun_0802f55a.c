/**
 * @brief fun_0802f55a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802f55a, Ghidra name FUN_0802f55a, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802f55a(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *unaff_r10;
  int unaff_lr;
  undefined4 unaff_pc;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 uStack_194;
  
  software_bkpt(0xcf);
  software_bkpt(0xd1);
  *unaff_r7 = param_3;
  unaff_r7[1] = unaff_r4;
  unaff_r7[2] = unaff_r6;
  unaff_r7[3] = unaff_r7;
  software_bkpt(0xd2);
  if (unaff_r5 == 0) {
    return uStack_194;
  }
  *(undefined4 *)(param_2 + 0x2dc) = unaff_pc;
  *(undefined4 **)(param_2 + 0x2e0) = unaff_r7;
  coprocessor_movefromRt(10,5,6,in_cr6,in_cr2);
  *unaff_r10 = param_1;
  unaff_r10[1] = (undefined4 *)(param_2 + 0x2dc);
  unaff_r10[2] = &stack0x000003c8;
  unaff_r10[3] = unaff_r4;
  unaff_r10[4] = unaff_r6;
  unaff_r10[5] = unaff_r7;
  coprocessor_load(6,in_cr10,unaff_lr + 800);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

