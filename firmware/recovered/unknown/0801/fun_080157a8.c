/**
 * @brief fun_080157a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080157a8, Ghidra name FUN_080157a8, 20 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080157a8(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_080157bc;
  iVar2 = (param_2 & 0x7fff) * 2;
  *(char *)(DAT_080157bc + iVar2) = (char)((uint)param_1 >> 8);
  *(char *)(iVar2 + iVar1 + 1) = (char)param_1;
  return;
}

