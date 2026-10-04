/**
 * @brief fun_08000d3a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000d3a, Ghidra name FUN_08000d3a, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08000d3a(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_080010c4();
  uVar2 = *puVar1;
  FUN_08001c54(param_1,0,10);
  *puVar1 = uVar2;
  return;
}

