/**
 * @brief fun_0802b9ba
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b9ba, Ghidra name FUN_0802b9ba, 230 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802ba50) */
/* WARNING: Removing unreachable block (ram,0x0802ba60) */
/* WARNING: Removing unreachable block (ram,0x0802ba32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b9ba(uint param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 unaff_r4;
  uint unaff_r5;
  int iVar5;
  uint uVar6;
  int unaff_r7;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  char in_OV;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr10;
  
  while( true ) {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r4;
    *(int *)((int)register0x00000054 + -0x10) = param_2;
    *(uint *)((int)register0x00000054 + -0x14) = param_1;
    uVar6 = param_3 >> 8;
    if (uVar6 == 0) break;
    param_3 = 0xdf;
    _DAT_0000012f = uVar6 & 0xdf;
    param_1 = param_4 >> 0x1c;
    puVar7 = (undefined1 *)((int)register0x00000054 + -0x18);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
    coprocessor_load(0xe,in_cr7,puVar7);
    param_2 = *(int *)(param_2 + 0x7c);
    software_interrupt(0x3e);
    *(uint *)(_DAT_0000012f + 0x10) = param_1;
    in_OV = SBORROW4(unaff_r5,0x4e);
    unaff_r5 = unaff_r5 - 0x4e;
  }
  param_4 = param_4 >> (unaff_r5 & 0xff);
  bVar8 = param_4 == 0;
  *(short *)(unaff_r5 + 0x16) = (short)param_4;
  piVar4 = *(int **)((int)register0x00000054 + 0x44);
  iVar5 = 0;
  do {
    puVar3 = *(undefined1 **)((int)register0x00000054 + 0x31c);
    unaff_r7 = unaff_r7 + (int)register0x00000054 + -0x14;
    if (!bVar8 && param_4 < 0 == (bool)in_OV) {
LAB_0802b9fc:
      *(int **)((int)register0x00000054 + 0x44) = piVar4;
LAB_0802ba04:
      uVar2 = *(ushort *)(puVar3 + 0x10);
      iVar5 = *(int *)(unaff_r7 + 0x44);
      *piVar4 = (int)register0x00000054 + 0x44;
      piVar4[1] = iVar5;
      piVar4[2] = (uint)uVar2;
      coprocessor_load(2,in_cr5,*(ushort *)((int)((int)register0x00000054 + 0x44) * 0x100 + 0x1e) -
                                0x1cc);
      *(undefined1 **)((int)register0x00000054 + 0x44) =
           (undefined1 *)((int)register0x00000054 + 0x330);
      *(int **)((int)register0x00000054 + 0xac) = &DAT_0802bc94;
      coprocessor_movefromRt(3,8,in_cr10);
      coprocessor_movefromRt2(3,8,in_cr10);
      *(short *)(DAT_0802bca0 + DAT_0802bc94) = (short)DAT_0802bca0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0xcc < (int)unaff_r5) {
      halt_baddata();
    }
    if (!SBORROW4(unaff_r5,0xcd)) goto LAB_0802ba04;
    *(short *)(unaff_r7 + 0x1a) = (short)*(undefined4 *)((int)register0x00000054 + 0x360);
    *(uint *)(iVar5 + 0x28) = param_1;
    bVar9 = SCARRY4(iVar5,0xa600000);
    param_4 = iVar5 + 0xa600000;
    if (iVar5 == -0xa600000) {
      bVar1 = puVar3[0xc];
      *(short *)(unaff_r5 + 4) = (short)(int *)((int)register0x00000054 + -0x10) + 0x354;
      software_interrupt(0x47);
      _DAT_00000084 = bVar1 + 0x98;
      puVar3 = (undefined1 *)0x54;
      piVar4 = (int *)&DAT_000000b7;
      goto LAB_0802b9fc;
    }
    iVar5 = 0x802bbbc;
    *puVar3 = 0xbc;
    param_1 = (uint)*(byte *)(unaff_r5 + 0x17);
    bVar8 = false;
    in_OV = '\0';
    if (bVar9) {
      puVar3[1] = (char)unaff_r7;
      *(uint *)(param_1 + 0x10) = unaff_r5;
      puVar3[0x1c] = (byte)((uint)puVar3 >> 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

