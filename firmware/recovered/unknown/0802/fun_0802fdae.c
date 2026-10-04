/**
 * @brief fun_0802fdae
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802fdae, Ghidra name FUN_0802fdae, 102 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802fdae(int param_1,int *param_2)

{
  undefined4 extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r11;
  undefined4 extraout_r12;
  char in_NG;
  char in_OV;
  undefined4 in_cr15;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 *puStack_21c;
  undefined4 *puStack_218;
  undefined4 uStack_214;
  
  if (param_1 == 0) {
    *param_2 = unaff_r4;
    param_2[1] = unaff_r6;
    param_2[2] = unaff_r7;
    func_0x081fae00(0,param_2 + 3);
    func_0x07dd9b90();
    software_interrupt(0xee);
    *unaff_r11 = 0x802fe2f;
    unaff_r11[1] = extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = param_1;
  param_2[1] = unaff_r5;
  param_2[2] = unaff_r6;
  param_2[3] = unaff_r7;
  if (in_NG == in_OV) {
    func_0x08afe124(param_1,&DAT_0803068c);
    FUN_0801fb48();
    if (extraout_r1_00 == 0) {
      *puStack_218 = uStack_228;
      puStack_218[1] = uStack_224;
      puStack_218[2] = puStack_21c;
      puStack_218[3] = uStack_214;
      _Reset = puStack_218 + 4;
      *_Reset = uStack_228;
      puStack_218[5] = 0;
      puStack_218[6] = puStack_21c;
      puStack_218[7] = _Reset;
      puStack_218[8] = uStack_214;
      *_Reset = uStack_228;
      puStack_218[5] = extraout_r2;
      puStack_218[6] = uStack_224;
      puStack_218[7] = uStack_220;
      puStack_218[8] = puStack_21c;
      puStack_218[9] = _Reset;
      puStack_218[10] = uStack_214;
      coprocessor_storelong(1,in_cr15,extraout_r12);
      *puStack_21c = extraout_r2;
      puStack_21c[1] = uStack_220;
      puStack_21c[2] = _Reset;
      puStack_21c[3] = uStack_214;
      puStack_21c[4] = 0;
      puStack_21c[5] = extraout_r2;
      puStack_21c[6] = uStack_220;
      puStack_21c[7] = _Reset;
      puStack_21c[8] = uStack_214;
      puStack_21c[9] = uStack_228;
      puStack_21c[10] = extraout_r2;
      puStack_21c[0xb] = uStack_220;
      puStack_21c[0xc] = _Reset;
      puStack_21c[0xd] = uStack_214;
      puStack_21c[0xe] = uStack_228;
      puStack_21c[0xf] = 0;
      puStack_21c[0x10] = uStack_220;
      puStack_21c[0x11] = _Reset;
      puStack_21c[0x12] = uStack_214;
      _MasterStackPointer = puStack_21c + 0x13;
      _NMI = uStack_214;
      _HardFault = uStack_228;
      _MemManage = extraout_r2;
      _BusFault = uStack_220;
      _UsageFault = _Reset;
      _Reserved1 = uStack_214;
      _Reserved2 = uStack_224;
      _Reserved3 = uStack_220;
      _Reserved4 = _Reset;
      _SVCall = uStack_214;
      software_bkpt(0xef);
      software_bkpt(0xf3);
      software_bkpt(0xf1);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

