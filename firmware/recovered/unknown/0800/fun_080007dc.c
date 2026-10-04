/**
 * @brief fun_080007dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080007dc, Ghidra name FUN_080007dc, 2 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_080007dc(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int unaff_r4;
  int in_stack_00000120;
  
  *(undefined1 *)(in_stack_00000120 * 2) = param_1;
  iVar2 = iRam08000a98;
  *(int *)(param_4 + 0x2c) = iRam08000a98;
  puVar3 = (undefined1 *)(uint)*(byte *)(unaff_r4 + 0x1d);
  if (SBORROW4(in_stack_00000120,0xef)) {
    uVar1 = (undefined1)((int)puVar3 >> 3);
    *(undefined1 *)(iVar2 + 1) = uVar1;
    puVar4 = puVar3;
    if (param_4 + -2 < 0) {
      puVar4 = puVar3 + 1;
      *puVar3 = uVar1;
    }
    return puVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

