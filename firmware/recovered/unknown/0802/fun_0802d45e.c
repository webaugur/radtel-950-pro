/**
 * @brief fun_0802d45e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802d45e, Ghidra name FUN_0802d45e, 86 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802d050) */
/* WARNING: Removing unreachable block (ram,0x0802d05c) */
/* WARNING: Removing unreachable block (ram,0x07f8e1b4) */

void FUN_0802d45e(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar8;
  int unaff_r7;
  int unaff_r8;
  int unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr14;
  short in_stack_00000134;
  
  iVar7 = param_4 + -0x98;
  *param_3 = param_1;
  param_3[1] = param_2;
  param_3[2] = iVar7;
  param_3[3] = unaff_r4;
  coprocessor_load(0xd,in_cr7,unaff_r8 + -0x18c);
  if (unaff_r7 < 0xd0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = iVar7 >> 1;
  iVar6 = iVar7 >> 0x1a;
  software_hlt(0x2f);
  *(int *)(&stack0x00000124 + unaff_r7) = iVar5;
  *(short *)(iVar6 + 10) = (short)iVar7;
  bVar2 = *(byte *)((int)(param_3 + 4) + iVar5);
  uVar8 = (uint)bVar2;
  uVar3 = (ushort)bVar2;
  if (unaff_r7 == 0) {
    *(short *)(iVar7 * 2) = (short)iVar5;
    iVar5 = param_3[0x1c];
    *(char *)(iVar6 + 0xe) = (char)(iVar7 >> 0x1a);
    *(ushort *)(iVar5 + param_4 + -0x8c) = uVar3;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(100,0x802cf78);
    (*pcVar1)();
  }
  *(ushort *)(param_3 + 0xc) = uVar3;
  in_stack_00000134 = (short)(iVar7 >> 0x1a) + 0x4e;
  *(short *)(uVar8 + 4) = (short)(param_3 + 4);
  coprocessor_function2(0xb,0xb,1,in_cr14,in_cr10,in_cr0);
  coprocessor_load(0xc,in_cr6,unaff_r7);
  if (iVar6 < -0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (bool)hasExclusiveAccess((undefined4 *)(unaff_lr + 0x58));
  iRam0802d8f0 = iVar5;
  iRam0802d8f4 = iVar7;
  uRam0802d8f8 = uVar8;
  iRam0802d8fc = unaff_r7;
  if (bVar4) {
    *(undefined4 *)(unaff_lr + 0x58) = unaff_r5;
  }
  uRam0802d900 = 0x802d900;
  iRam0802d904 = iVar7;
  uRam0802d908 = uVar8;
  uRam0802d918 = uVar3;
  func_0x07a3e6e2(iVar5,param_4,0x802d900,unaff_r5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

