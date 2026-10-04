/**
 * @brief fun_0802e22c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802e22c, Ghidra name FUN_0802e22c, 158 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e22c(undefined2 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int *extraout_r1;
  int iVar4;
  int extraout_r2;
  uint extraout_r3;
  int unaff_r5;
  uint uVar5;
  int *piVar6;
  int unaff_r10;
  char in_ZR;
  undefined4 in_cr15;
  undefined8 unaff_d13;
  undefined8 in_d19;
  
  *(undefined2 *)(param_3 + 0x38) = param_1;
  func_0x087dd684();
  if (in_ZR != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *extraout_r1 = extraout_r2;
  extraout_r1[1] = 0x802e238;
  extraout_r1[2] = unaff_r5;
  iVar3 = iRam0802e43c;
  uVar2 = DAT_0802e257;
  piVar6 = *(int **)(unaff_r5 + 100);
  *piVar6 = extraout_r2;
  piVar6[1] = extraout_r3;
  if (SBORROW4(extraout_r2,extraout_r3)) {
    piVar6 = (int *)(extraout_r3 * 0x400);
    *(undefined1 *)(extraout_r2 * 0x4000000 + 0x14) = 0;
    coprocessor_loadlong(0,in_cr15,0x802e239);
    *piVar6 = extraout_r2;
    piVar6[1] = extraout_r2 * 0x4000000;
    piVar6[2] = extraout_r2 << 7;
    *(uint *)(extraout_r3 * 2 + 0x40) = extraout_r3 * 2;
    *(uint *)((extraout_r3 >> 4) * 2) = extraout_r3 >> 4;
    *(undefined4 *)(((int)(extraout_r3 * 0x10000 + -5) >> 0x14) + 0x1e) = 0;
    VectorRoundShiftRightAccumulate(in_d19,unaff_d13,1);
    *(undefined2 *)(_MasterStackPointer + 0x3c) = 0;
    (*(code *)0x0)(unaff_r10 << 0xf);
    return;
  }
  iVar4 = piVar6[2];
  uVar5 = piVar6[4];
  software_interrupt(0xc5);
  coprocessor_loadlong(0xc,in_cr15,0x802dedd);
  *(short *)((uint)*(ushort *)(iVar3 + 2) + iVar4) = (short)iVar3;
  *(undefined1 *)(iVar4 + 6) = uVar2;
  *(uint *)(int)(short)((ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff) = uVar5;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xcd,0x802e17c);
  (*pcVar1)();
}

