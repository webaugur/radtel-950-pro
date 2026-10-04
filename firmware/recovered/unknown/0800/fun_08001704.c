/**
 * @brief fun_08001704
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001704, Ghidra name FUN_08001704, 32 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08001704(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_080016a6();
  iVar2 = FUN_080260aa(param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  return uVar1;
}

