/**
 * @brief fun_0802d248
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802d248, Ghidra name FUN_0802d248, 58 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0802d248(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  int unaff_r4;
  int unaff_r5;
  int in_stack_0000025c;
  
  DAT_0802d3fc = &DAT_0802d3f4;
  uVar1 = *(undefined2 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)((uint)*(byte *)(in_stack_0000025c + 4) + unaff_r4);
  DAT_0802d3f4 = param_1;
  DAT_0802d3f8 = param_2;
  DAT_0802d400 = unaff_r4;
  DAT_0802d404 = unaff_r5;
  *(undefined1 *)(unaff_r4 + 10) = 0xf4;
  uVar2 = *(undefined2 *)(unaff_r5 + 0x1a);
  iVar4 = func_0x0797a094(uVar3,uVar1,(unaff_r5 + 0x16) * 0x1000);
  *(undefined2 *)(extraout_r2 + 0x38) = uVar2;
  *(int *)(iVar4 + 0x74) = extraout_r2 - (unaff_r5 + 0x16);
  if (iVar4 != 0x16) {
    return CONCAT44(param_4,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

