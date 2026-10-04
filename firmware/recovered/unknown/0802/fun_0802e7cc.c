/**
 * @brief fun_0802e7cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802e7cc, Ghidra name FUN_0802e7cc, 172 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802e9fc) */
/* WARNING: Removing unreachable block (ram,0x0802e9fe) */
/* WARNING: Removing unreachable block (ram,0x0802ea00) */
/* WARNING: Removing unreachable block (ram,0x0802ea02) */
/* WARNING: Removing unreachable block (ram,0x0802ea04) */
/* WARNING: Removing unreachable block (ram,0x0802e9c6) */
/* WARNING: Removing unreachable block (ram,0x0802e7e8) */
/* WARNING: Removing unreachable block (ram,0x0802e7d4) */
/* WARNING: Removing unreachable block (ram,0x0802e7d6) */
/* WARNING: Removing unreachable block (ram,0x0802e814) */
/* WARNING: Removing unreachable block (ram,0x0802e816) */
/* WARNING: Removing unreachable block (ram,0x0802e844) */
/* WARNING: Removing unreachable block (ram,0x0802e848) */
/* WARNING: Removing unreachable block (ram,0x0802e84c) */
/* WARNING: Removing unreachable block (ram,0x0802e84e) */
/* WARNING: Removing unreachable block (ram,0x0802e850) */
/* WARNING: Removing unreachable block (ram,0x0802e852) */
/* WARNING: Removing unreachable block (ram,0x0802e854) */
/* WARNING: Removing unreachable block (ram,0x0802e856) */
/* WARNING: Removing unreachable block (ram,0x0802e858) */
/* WARNING: Removing unreachable block (ram,0x0802e85a) */
/* WARNING: Removing unreachable block (ram,0x0802e7c0) */
/* WARNING: Removing unreachable block (ram,0x0802e85c) */
/* WARNING: Removing unreachable block (ram,0x0802e85e) */
/* WARNING: Removing unreachable block (ram,0x0802e860) */
/* WARNING: Removing unreachable block (ram,0x07a1e422) */
/* WARNING: Removing unreachable block (ram,0x0802e7ea) */
/* WARNING: Removing unreachable block (ram,0x0802e818) */
/* WARNING: Removing unreachable block (ram,0x0802e81a) */
/* WARNING: Removing unreachable block (ram,0x0802e7ec) */
/* WARNING: Removing unreachable block (ram,0x0802e81c) */
/* WARNING: Removing unreachable block (ram,0x0802e7ee) */
/* WARNING: Removing unreachable block (ram,0x0802e81e) */
/* WARNING: Removing unreachable block (ram,0x0802e7f0) */
/* WARNING: Removing unreachable block (ram,0x0802e820) */
/* WARNING: Removing unreachable block (ram,0x0802e7f2) */
/* WARNING: Removing unreachable block (ram,0x0802e822) */
/* WARNING: Removing unreachable block (ram,0x0802e824) */
/* WARNING: Removing unreachable block (ram,0x0802e7f4) */
/* WARNING: Removing unreachable block (ram,0x0802e7f6) */
/* WARNING: Removing unreachable block (ram,0x0802e7f8) */
/* WARNING: Removing unreachable block (ram,0x0802e82a) */
/* WARNING: Removing unreachable block (ram,0x0802e7fa) */
/* WARNING: Removing unreachable block (ram,0x0802e800) */
/* WARNING: Removing unreachable block (ram,0x0802e826) */
/* WARNING: Removing unreachable block (ram,0x0802e828) */
/* WARNING: Removing unreachable block (ram,0x0802e866) */
/* WARNING: Removing unreachable block (ram,0x0802e870) */
/* WARNING: Removing unreachable block (ram,0x0802e876) */
/* WARNING: Removing unreachable block (ram,0x0802e9e0) */
/* WARNING: Removing unreachable block (ram,0x0802e9ea) */
/* WARNING: Removing unreachable block (ram,0x0802e9f6) */
/* WARNING: Removing unreachable block (ram,0x0802e960) */
/* WARNING: Removing unreachable block (ram,0x0802e9fa) */
/* WARNING: Removing unreachable block (ram,0x0802e962) */
/* WARNING: Removing unreachable block (ram,0x0802e964) */
/* WARNING: Removing unreachable block (ram,0x0802e9d2) */
/* WARNING: Removing unreachable block (ram,0x0802e9d4) */
/* WARNING: Removing unreachable block (ram,0x0802e9da) */
/* WARNING: Removing unreachable block (ram,0x0802e9dc) */
/* WARNING: Removing unreachable block (ram,0x0802e93a) */
/* WARNING: Removing unreachable block (ram,0x0802e940) */
/* WARNING: Removing unreachable block (ram,0x0802e942) */
/* WARNING: Removing unreachable block (ram,0x0802e946) */
/* WARNING: Removing unreachable block (ram,0x0802e95a) */
/* WARNING: Removing unreachable block (ram,0x0802e988) */
/* WARNING: Removing unreachable block (ram,0x0802e996) */
/* WARNING: Removing unreachable block (ram,0x0802e99a) */
/* WARNING: Removing unreachable block (ram,0x0802e9a0) */
/* WARNING: Removing unreachable block (ram,0x0802e9ca) */

void FUN_0802e7cc(int param_1,undefined *param_2,undefined *param_3)

{
  code *pcVar1;
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr10;
  
  while( true ) {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r7;
    *(undefined **)((int)register0x00000054 + -0xc) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0x14) = unaff_r4;
    *(undefined **)((int)register0x00000054 + -0x18) = param_3;
    *(undefined4 *)((int)register0x00000054 + -0x1c) = param_2;
    software_interrupt(0xe6);
    if (in_CY != false) {
      unaff_r6 = &DAT_0802ea78;
      param_2 = &DAT_0802ea78;
      unaff_r4 = (undefined4 *)((int)register0x00000054 + 0x2a8);
      coprocessor_movefromRt(10,5,5,in_cr0,in_cr1);
    }
    if (!in_CY || in_ZR) break;
    param_1 = param_1 + 0x2c4;
    coprocessor_load(4,in_cr10,param_1);
    param_3 = &DAT_0802ea84;
    if (in_NG == in_OV) break;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
    if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xde,0x802e756);
  (*pcVar1)();
}

