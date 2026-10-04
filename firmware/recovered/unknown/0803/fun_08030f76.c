/**
 * @brief fun_08030f76
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08030f76, Ghidra name FUN_08030f76, 46 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030f76(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *extraout_r2;
  int unaff_r4;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  char in_NG;
  char in_OV;
  undefined4 in_cr12;
  undefined8 extraout_d7;
  undefined8 in_d31;
  undefined4 uStack_14;
  
  puVar2 = *(undefined4 **)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(*(int *)(unaff_r4 + 0x20) +
                                                                    0x20) + 8) + 8) + 8) + 8) + 0x10
                     ) + 4);
  puVar3 = (undefined4 *)puVar2[3];
  uVar4 = puVar3[7];
  uVar5 = puVar3[8];
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_14 = param_2;
  func_0x07cfcae6(*puVar2,*puVar3,puVar3[5],puVar3[2]);
  coprocessor_storelong(10,in_cr12,&uStack_14);
  uVar1 = VectorGetElement(extraout_d7,3,2,0);
  VectorMultiply(in_d31,uVar1,2);
  *extraout_r2 = uVar4;
  extraout_r2[1] = unaff_r6;
  extraout_r2[2] = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

