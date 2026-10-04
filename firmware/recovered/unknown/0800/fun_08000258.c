/**
 * @brief fun_08000258
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000258, Ghidra name FUN_08000258, 36 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08000258(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_08029568();
  iVar1 = FUN_08000cbc();
  iVar2 = FUN_08027a68(0,0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  uVar3 = FUN_08027a94(0,0);
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return CONCAT44(param_2,param_1);
}

