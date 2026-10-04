/**
 * @brief fun_08000754
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000754, Ghidra name FUN_08000754, 80 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_08000754(undefined4 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  uint uVar7;
  int unaff_r7;
  int unaff_r10;
  int in_r12;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr14;
  int in_stack_000000d0;
  int in_stack_00000120;
  int in_stack_0000039c;
  
  if (unaff_r7 != 0) {
    coprocessor_load(9,in_cr1,in_r12 + -0x148);
    coprocessor_function(8,9,3,in_cr14,in_cr4,in_cr2);
    if (-1 < unaff_r5 >> 0x1e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe7,0x8000766);
    (*pcVar1)();
  }
  *(undefined4 *)((int)param_1 + (int)param_3) = unaff_r6;
  uVar7 = param_3[0xf];
  *(undefined1 *)((int)param_1 * 0x800000 + 0x19) = 1;
  *(short *)(unaff_r4 + 0x2c) = (short)unaff_r4;
  if (in_stack_0000039c != 0) {
    iVar4 = unaff_r4;
    if ((int)param_1 * 0x800000 < 0 == SBORROW4(unaff_r4,5)) goto FUN_080007cc;
    in_stack_0000039c = (int)*(char *)(in_stack_0000039c * 2);
    bVar2 = *(byte *)(uVar7 + 10);
    coprocessor_load(4,in_cr6,unaff_r10 + 0x3b4);
    param_3 = (int *)(param_2 * 2);
    *param_3 = param_2 >> 0x11;
    param_3[1] = param_2;
    param_3[2] = in_stack_000000d0;
    param_3[3] = uVar7;
    param_3[4] = (uint)bVar2;
    param_3 = param_3 + 5;
    param_1 = &DAT_08000b70;
    do {
      *param_1 = param_3;
      param_1[1] = in_stack_0000039c;
      param_1[2] = in_stack_000000d0;
      param_1[3] = 1;
      param_1[4] = uVar7;
      param_1 = param_1 + 5;
      iVar4 = in_stack_000000d0;
FUN_080007cc:
      in_stack_000000d0 = iVar4;
      uVar7 = (uint)param_1 >> 8;
    } while (SBORROW4((int)param_3,0xc9));
    *(char *)(in_stack_00000120 * 2) = (char)param_1;
    iVar4 = iRam08000a98;
    *(int *)(in_stack_0000039c + 0x2c) = iRam08000a98;
    puVar5 = (undefined1 *)(uint)*(byte *)(in_stack_000000d0 + 0x1d);
    if (SBORROW4(in_stack_00000120,0xef)) {
      uVar3 = (undefined1)((int)puVar5 >> 3);
      *(undefined1 *)(iVar4 + 1) = uVar3;
      puVar6 = puVar5;
      if (in_stack_0000039c + -2 < 0) {
        puVar6 = puVar5 + 1;
        *puVar5 = uVar3;
      }
      return puVar6;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

