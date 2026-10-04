/**
 * @brief fun_0803a616
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803a616, Ghidra name FUN_0803a616, 138 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803a616(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r2;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int iVar4;
  int unaff_r5;
  undefined4 *unaff_r6;
  int iVar5;
  uint unaff_r7;
  int unaff_lr;
  undefined4 unaff_pc;
  
  while( true ) {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r4;
    *(int *)((int)register0x00000054 + -0x10) = param_3;
    *(int *)((int)register0x00000054 + -0x14) = param_2;
    uVar1 = *unaff_r6;
    uVar3 = unaff_r6[1];
    iVar4 = unaff_r6[2];
    iVar5 = unaff_r6[3];
    iVar2 = VectorTableLookup(unaff_r5,unaff_pc,2);
    *(short *)(unaff_r5 + iVar2) = (short)iVar2;
    if (!SBORROW4(param_2 + -199,0x65)) break;
    unaff_lr = 0x803a5dd;
    func_0x07fd95da(uVar1,param_2 + -199,iVar2,uVar3);
    *(int *)((int)register0x00000054 + 0x2b4) = iVar4;
    param_2 = extraout_r1 + -199;
    iVar2 = *(int *)(iVar5 + 0xc);
    *(short *)(unaff_r5 + extraout_r2) = (short)extraout_r2;
    *(short *)(unaff_r5 + extraout_r2) = (short)extraout_r2;
    unaff_r4 = *(int *)(iVar2 + 8);
    unaff_r6 = *(undefined4 **)(iVar2 + 0xc);
    unaff_r7 = (uint)*(byte *)(unaff_r5 + 0xf);
    param_3 = extraout_r2;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

