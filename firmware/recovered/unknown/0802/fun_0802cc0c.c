/**
 * @brief fun_0802cc0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802cc0c, Ghidra name FUN_0802cc0c, 152 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802c16c) */
/* WARNING: Removing unreachable block (ram,0x0802c0bc) */
/* WARNING: Removing unreachable block (ram,0x0802c172) */
/* WARNING: Removing unreachable block (ram,0x0802c180) */
/* WARNING: Removing unreachable block (ram,0x0802c18a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802cc0c(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *unaff_r4;
  uint unaff_r5;
  undefined1 uVar5;
  uint unaff_r6;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int *unaff_r7;
  char in_ZR;
  bool bVar10;
  undefined4 in_cr10;
  uint *in_stack_000001dc;
  int aiStack_5f [22];
  
  coprocessor_load(0xd,in_cr10,unaff_r6 - 8);
  while (param_4 == (int *)0x0) {
    unaff_r7 = aiStack_5f;
    *unaff_r4 = 0;
    param_4 = (int *)0x0;
    puVar1 = (undefined1 *)register0x00000054;
    if ((int)unaff_r4 >> 0x1e == 0) {
      *(short *)(&stack0x00000000 + ((int)param_3 >> 0x15)) = (short)&stack0x00000000;
      uVar3 = ((int)param_3 >> 0x15) + 0x65;
      iVar6 = uVar3 * 0x1000;
      *(undefined2 *)(DAT_0802cec0 + 0x34) = 0xcddc;
      uVar4 = *(uint *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 0x10);
      uVar2 = uVar4 & 0xff;
      iVar7 = iVar6 >> uVar2;
      uVar4 = uVar4 & 0xff;
      iVar8 = iVar7 >> uVar4;
      param_4 = *(int **)(iVar8 + 8);
      unaff_r7 = *(int **)(iVar8 + 0xc);
      *(int **)(iVar8 + 0x38) = unaff_r7;
      puVar1 = (undefined1 *)*param_4;
      unaff_r5 = param_4[3];
      param_4 = param_4 + 4;
      if (uVar4 == 0 &&
          (uVar2 == 0 && (uVar3 & 0x100000) != 0 || uVar2 != 0 && (iVar6 >> uVar2 - 1 & 1U) != 0) ||
          uVar4 != 0 && (iVar7 >> uVar4 - 1 & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    iVar6 = param_4[1];
    unaff_r4 = (undefined1 *)param_4[2];
    param_4 = param_4 + 3;
    unaff_r4[0xe] = (char)unaff_r7;
    param_2 = (int)puVar1 << 0x15;
    unaff_r6 = (uint)*(ushort *)(iVar6 + 0x30);
    param_3 = iVar6 - 0xc;
    in_ZR = param_3 == 0;
    if (iVar6 < 0xc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (in_ZR != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(uint *)(param_2 + 0x48);
  if (unaff_r5 != 0) {
    uVar5 = (undefined1)unaff_r6;
    unaff_r4[param_3] = uVar5;
    uVar4 = DAT_0802c7c0;
    bVar10 = SCARRY4(uVar2,(int)unaff_r7);
    if (uVar2 + (int)unaff_r7 != 0 && (int)(uVar2 + (int)unaff_r7) < 0 == bVar10) {
      uVar5 = (undefined1)((int)param_3 >> 0xc);
      uVar2 = (uint)param_4 >> 0x19;
    }
    if (param_4 != (int *)0x0) {
      *(char *)(param_3 + 0x18) = (char)*(undefined2 *)(param_3 + 0x38);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar9 = (uint *)(int)(short)param_3;
    uRam0000000e = uVar5;
    *in_stack_000001dc = uVar2;
    in_stack_000001dc[1] = param_3;
    in_stack_000001dc[2] = uVar4;
    in_stack_000001dc[3] = unaff_r5;
    in_stack_000001dc[4] = (uint)unaff_r7;
    if (!bVar10) {
      *unaff_r7 = (int)(in_stack_000001dc + 5) * 0x4000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = uVar4 & 0xffff | 0x3de20000;
    Reserved5 = (undefined1)DAT_0802c480;
    *puVar9 = uVar2;
    puVar9[1] = param_3;
    puVar9[2] = uVar4;
    puVar9[3] = (int)uVar4 >> 1;
    puVar9[4] = 0x16;
    puVar9[5] = (uint)puVar9;
    _DAT_0000002e = (short)param_3;
    *(short *)(param_3 * 0x100) = (short)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

