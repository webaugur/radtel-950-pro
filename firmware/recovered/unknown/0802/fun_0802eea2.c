/**
 * @brief fun_0802eea2
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802eea2, Ghidra name FUN_0802eea2, 96 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802eea2(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_r2;
  undefined4 *extraout_r3;
  undefined4 uVar6;
  int iVar7;
  int *unaff_r4;
  undefined4 uVar8;
  int *piVar9;
  int unaff_r5;
  int iVar10;
  int *unaff_r6;
  undefined4 *puVar11;
  int iVar12;
  int *unaff_r7;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  int *piVar13;
  undefined4 in_cr0;
  undefined4 in_cr14;
  undefined8 uVar14;
  
  while( true ) {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_lr;
    *(int **)((int)register0x00000054 + -0xc) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = param_2;
    *(int *)((int)register0x00000054 + -0x1c) = param_1;
    *(int *)((int)register0x00000054 + -0x20) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x24) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x28) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x2c) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x30) = param_3;
    *(int *)((int)register0x00000054 + -0x34) = param_2;
    *(int *)((int)register0x00000054 + -0x38) = param_1;
    *(int *)((int)register0x00000054 + -0x3c) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x40) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x44) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x48) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0x4c) = param_4;
    *(int *)((int)register0x00000054 + -0x50) = param_2;
    *(int *)((int)register0x00000054 + -0x54) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x58) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x5c) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x60) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -100) = param_4;
    *(int *)((int)register0x00000054 + -0x68) = param_3;
    *(int *)((int)register0x00000054 + -0x6c) = param_2;
    *(int *)((int)register0x00000054 + -0x70) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x74) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x78) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x7c) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0x80) = param_4;
    *(int *)((int)register0x00000054 + -0x84) = param_3;
    *(int *)((int)register0x00000054 + -0x88) = param_1;
    *(int *)((int)register0x00000054 + -0x8c) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x90) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x94) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x98) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x9c) = unaff_lr;
    *(int **)((int)register0x00000054 + -0xa0) = unaff_r7;
    *(int **)((int)register0x00000054 + -0xa4) = unaff_r6;
    *(int **)((int)register0x00000054 + -0xa8) = unaff_r4;
    *(undefined4 **)((int)register0x00000054 + -0xac) = param_4;
    *(int *)((int)register0x00000054 + -0xb0) = param_3;
    *(int *)((int)register0x00000054 + -0xb4) = param_2;
    *(int *)((int)register0x00000054 + -0xb8) = param_1;
    *(int *)((int)register0x00000054 + -0xbc) = unaff_lr;
    *(int **)((int)register0x00000054 + -0xc0) = unaff_r7;
    *(int **)((int)register0x00000054 + -0xc4) = unaff_r6;
    *(int *)((int)register0x00000054 + -200) = unaff_r5;
    *(int *)((int)register0x00000054 + -0xcc) = param_3;
    *(int *)((int)register0x00000054 + -0xd0) = param_2;
    *(int *)((int)register0x00000054 + -0xd4) = unaff_lr;
    *(int **)((int)register0x00000054 + -0xd8) = unaff_r7;
    *(int **)((int)register0x00000054 + -0xdc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0xe0) = unaff_r5;
    *(int *)((int)register0x00000054 + -0xe4) = param_2;
    *(int *)((int)register0x00000054 + -0xe8) = unaff_lr;
    *(int **)((int)register0x00000054 + -0xec) = unaff_r7;
    *(int **)((int)register0x00000054 + -0xf0) = unaff_r6;
    *(int *)((int)register0x00000054 + -0xf4) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0xf8) = param_4;
    *(int *)((int)register0x00000054 + -0xfc) = param_2;
    *(int *)((int)register0x00000054 + -0x100) = param_1;
    *(int *)((int)register0x00000054 + -0x104) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x108) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x10c) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x110) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0x114) = param_4;
    *(int *)((int)register0x00000054 + -0x118) = param_3;
    *(int *)((int)register0x00000054 + -0x11c) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x120) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x124) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x128) = unaff_r5;
    *(int *)((int)register0x00000054 + -300) = param_3;
    *(int *)((int)register0x00000054 + -0x130) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x134) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x138) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x13c) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0x140) = param_4;
    *(int *)((int)register0x00000054 + -0x144) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x148) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x14c) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x150) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x154) = param_3;
    *(int *)((int)register0x00000054 + -0x158) = param_1;
    *(int *)((int)register0x00000054 + -0x15c) = unaff_lr;
    *(int **)((int)register0x00000054 + -0x160) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x164) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x168) = unaff_r5;
    piVar5 = (int *)((int)register0x00000054 + -0x16c);
    *piVar5 = param_1;
    unaff_lr = 0x802eec7;
    uVar14 = func_0x07e18c78();
    param_2 = (int)((ulonglong)uVar14 >> 0x20);
    param_1 = (int)uVar14;
    if ((in_NG == in_OV) && (in_NG != in_OV)) {
      func_0x08616832();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      *(int *)param_1 = param_1;
      *(int *)(param_1 + 4) = extraout_r2;
      *(int **)(param_1 + 8) = unaff_r4;
      *(int *)(param_1 + 0xc) = unaff_r5;
      *(int **)(param_1 + 0x10) = unaff_r7;
      if (unaff_r5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *unaff_r6 = param_1;
      unaff_r6[1] = extraout_r2;
      unaff_r6[2] = (int)unaff_r4;
      unaff_r6[3] = unaff_r5;
      unaff_r6[4] = (int)unaff_r7;
      uVar4 = extraout_r3[1];
      uVar6 = extraout_r3[2];
      uVar8 = extraout_r3[3];
      puVar11 = (undefined4 *)extraout_r3[4];
      *puVar11 = *extraout_r3;
      puVar11[1] = uVar4;
      puVar11[2] = uVar6;
      puVar11[3] = uVar8;
      puVar11[4] = puVar11;
      iVar3 = unaff_r6[6];
      piVar5 = *(int **)(iVar3 + 4);
      piVar13 = (int *)(iVar3 + 0x14);
      iVar2 = *piVar5;
      iVar7 = piVar5[1];
      iVar10 = piVar5[2];
      piVar9 = (int *)piVar5[3];
      puVar11 = (undefined4 *)piVar5[4];
      *piVar9 = iVar2;
      piVar9[1] = iVar7;
      piVar9[2] = iVar10;
      piVar9[3] = (int)piVar9;
      piVar9[4] = (int)puVar11;
      uVar1 = (ushort)((uint)puVar11 >> 8);
      iVar10 = (int)(short)((ushort)(((uint)puVar11 & 0xff) << 8) | uVar1 & 0xff);
      iVar7 = (int)(short)((ushort)(((uint)puVar11 & 0xff) << 8) | uVar1 & 0xff);
      if (piVar13 == (int *)0x0) {
        software_hlt(0x26);
        software_hlt(0x37);
        if (puVar11[5] == 0) {
          func_0x088d29ca(*puVar11,0,puVar11[1],0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *piVar13 = iVar2;
      *(int **)(iVar3 + 0x18) = piVar13;
      *(int *)(iVar3 + 0x1c) = iVar7;
      *(int *)(iVar3 + 0x20) = iVar10;
      *(int **)(iVar3 + 0x24) = piVar9;
      *(undefined4 **)(iVar3 + 0x28) = puVar11;
      *(int *)iVar2 = iVar2;
      *(int **)(iVar2 + 4) = piVar13;
      *(int *)(iVar2 + 8) = iVar7;
      *(int *)(iVar2 + 0xc) = iVar10;
      *(int **)(iVar2 + 0x10) = piVar9;
      *(undefined4 **)(iVar2 + 0x14) = puVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r6 = unaff_r6 + 0xda;
    coprocessor_load(0xf,in_cr14,unaff_r6);
    if (in_NG != in_OV) break;
    if (!(bool)in_CY || (bool)in_ZR) goto LAB_0802ee6a;
    param_2 = param_2 + 0x318;
    coprocessor_storelong(0,in_cr0,param_2);
    *unaff_r7 = unaff_r5;
    unaff_r7[1] = (int)unaff_r6;
    unaff_r7[2] = (int)unaff_r7;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    register0x00000054 = (BADSPACEBASE *)piVar5;
  }
  *(int *)((int)register0x00000054 + -0x170) = 0x802eec7;
  *(int **)((int)register0x00000054 + -0x174) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x178) = unaff_r6;
  *(undefined4 **)((int)register0x00000054 + -0x17c) = extraout_r3;
  *(int *)((int)register0x00000054 + -0x180) = extraout_r2;
  *(int *)((int)register0x00000054 + -0x184) = param_2;
  *(int *)((int)register0x00000054 + -0x188) = 0x802eec7;
  *(int **)((int)register0x00000054 + -0x18c) = unaff_r7;
  *(int **)((int)register0x00000054 + -400) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x194) = unaff_r4;
  *(undefined4 **)((int)register0x00000054 + -0x198) = extraout_r3;
  *(undefined8 *)((int)register0x00000054 + -0x1a0) = uVar14;
  *(int *)((int)register0x00000054 + -0x1a4) = 0x802eec7;
  *(int **)((int)register0x00000054 + -0x1a8) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x1ac) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1b0) = unaff_r4;
  *(undefined4 **)((int)register0x00000054 + -0x1b4) = extraout_r3;
  *(int *)((int)register0x00000054 + -0x1b8) = extraout_r2;
  *(int *)((int)register0x00000054 + -0x1bc) = param_1;
  *(int *)((int)register0x00000054 + -0x1c0) = 0x802eec7;
  *(int **)((int)register0x00000054 + -0x1c4) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x1c8) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1cc) = unaff_r4;
  *(int *)((int)register0x00000054 + -0x1d0) = extraout_r2;
  *(int *)((int)register0x00000054 + -0x1d4) = param_1;
  *(int *)((int)register0x00000054 + -0x1d8) = 0x802eec7;
  *(int **)((int)register0x00000054 + -0x1dc) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x1e0) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1e4) = unaff_r4;
  *(undefined4 **)((int)register0x00000054 + -0x1e8) = extraout_r3;
  *(int *)((int)register0x00000054 + -0x1ec) = extraout_r2;
  *(int *)((int)register0x00000054 + -0x1f0) = 0x802eec7;
  *(int **)((int)register0x00000054 + -500) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x1f8) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1fc) = unaff_r4;
  *(undefined4 **)((int)register0x00000054 + -0x200) = extraout_r3;
  *(int *)((int)register0x00000054 + -0x204) = extraout_r2;
  piVar5 = (int *)((int)register0x00000054 + -0x208);
  *piVar5 = param_2;
LAB_0802ee6a:
  piVar5[-1] = 0x802eec7;
  piVar5[-2] = (int)unaff_r7;
  piVar5[-3] = (int)unaff_r6;
  piVar5[-4] = (int)extraout_r3;
  piVar5[-5] = extraout_r2;
  piVar5[-6] = 0x802eec7;
  piVar5[-7] = (int)unaff_r7;
  piVar5[-8] = (int)unaff_r6;
  piVar5[-9] = extraout_r2;
  iVar2 = *unaff_r4;
  iVar3 = unaff_r4[1];
  iVar7 = unaff_r4[2];
  iVar10 = unaff_r4[3];
  iVar12 = unaff_r4[4];
  piVar5[-10] = 0x802eec7;
  piVar5[-0xb] = iVar12;
  piVar5[-0xc] = iVar10;
  piVar5[-0xd] = unaff_r5;
  piVar5[-0xe] = iVar2;
  piVar5[-0xf] = 0x802eec7;
  piVar5[-0x10] = iVar12;
  piVar5[-0x11] = iVar10;
  piVar5[-0x12] = iVar7;
  piVar5[-0x13] = iVar2;
  piVar5[-0x14] = 0x802eec7;
  piVar5[-0x15] = iVar12;
  piVar5[-0x16] = iVar10;
  piVar5[-0x17] = (int)extraout_r3;
  piVar5[-0x18] = extraout_r2;
  piVar5[-0x19] = iVar3;
  piVar5[-0x1a] = iVar2;
  piVar5[-0x1b] = 0x802eec7;
  piVar5[-0x1c] = iVar12;
  piVar5[-0x1d] = iVar10;
  piVar5[-0x1e] = iVar7;
  piVar5[-0x1f] = iVar3;
  piVar5[-0x20] = 0x802eec7;
  piVar5[-0x21] = iVar12;
  piVar5[-0x22] = iVar10;
  piVar5[-0x23] = iVar7;
  piVar5[-0x24] = extraout_r2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

