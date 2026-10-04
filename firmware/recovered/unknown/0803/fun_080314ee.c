/**
 * @brief fun_080314ee
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080314ee, Ghidra name FUN_080314ee, 266 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x08031538) overlaps instruction at (ram,0x08031536)
    */
/* WARNING: Removing unreachable block (ram,0x080313ee) */
/* WARNING: Removing unreachable block (ram,0x08031422) */
/* WARNING: Removing unreachable block (ram,0x0803142a) */
/* WARNING: Removing unreachable block (ram,0x08031538) */
/* WARNING: Removing unreachable block (ram,0x0803148a) */
/* WARNING: Removing unreachable block (ram,0x08031490) */
/* WARNING: Removing unreachable block (ram,0x08031492) */
/* WARNING: Removing unreachable block (ram,0x080314c4) */
/* WARNING: Removing unreachable block (ram,0x080314d0) */
/* WARNING: Removing unreachable block (ram,0x080314d4) */
/* WARNING: Removing unreachable block (ram,0x0803150c) */
/* WARNING: Removing unreachable block (ram,0x080314d6) */
/* WARNING: Removing unreachable block (ram,0x080314da) */
/* WARNING: Removing unreachable block (ram,0x08031550) */
/* WARNING: Removing unreachable block (ram,0x08031552) */
/* WARNING: Removing unreachable block (ram,0x08031554) */
/* WARNING: Removing unreachable block (ram,0x080314fc) */
/* WARNING: Removing unreachable block (ram,0x0803155a) */
/* WARNING: Removing unreachable block (ram,0x0803155e) */
/* WARNING: Removing unreachable block (ram,0x08031500) */
/* WARNING: Removing unreachable block (ram,0x08031504) */
/* WARNING: Removing unreachable block (ram,0x08031506) */
/* WARNING: Removing unreachable block (ram,0x0803150a) */
/* WARNING: Removing unreachable block (ram,0x080313d6) */
/* WARNING: Removing unreachable block (ram,0x08031532) */
/* WARNING: Removing unreachable block (ram,0x08031534) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x08031486 */
/* WARNING: Removing unreachable block (ram,0x08031494) */
/* WARNING: Removing unreachable block (ram,0x08031486) */
/* WARNING: Removing unreachable block (ram,0x0803149c) */
/* WARNING: Removing unreachable block (ram,0x080314a4) */
/* WARNING: Removing unreachable block (ram,0x080314a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_080314ee(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 *extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r8;
  int extraout_r12;
  char in_NG;
  char in_ZR;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar2;
  
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_movefromRt(10,6,6,in_cr12,in_cr10);
  uVar2 = func_0x0710d574(0,&stack0x0000036c,param_3,param_4);
  if (in_ZR != '\0') {
    coprocessor_storelong(3,in_cr10,extraout_r12 + 0x334);
    coprocessor_storelong(4,in_cr10,extraout_r12);
    coprocessor_function2(1,0xc,6,in_cr10,in_cr12,in_cr13);
    func_0x0850d860((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x80313d8);
    *extraout_r3 = extraout_r1;
    extraout_r3[1] = extraout_r2;
    extraout_r3[2] = 0x80313d4;
    extraout_r3[3] = 0x80313cc;
    extraout_r3[4] = 0x80313d4;
    *unaff_r8 = &stack0xfffffff0;
    unaff_r8[1] = extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd0,0x8031584);
    (*pcVar1)();
  }
  coprocessor_storelong(8,in_cr13,extraout_r3_00);
  if ((in_NG == in_OV) && (in_NG != in_OV)) {
    func_0x07ee1adc();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

