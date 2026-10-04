/**
 * @brief fun_08021adc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021adc, Ghidra name FUN_08021adc, 50 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08021adc(int param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1 & 0xff) {
    cVar1 = *(char *)(param_1 + uVar3);
    if ((cVar1 == ' ') || (cVar1 == '.')) {
      *(undefined1 *)(param_1 + uVar3) = 0x30;
    }
    else {
      *(char *)((int)local_18 + uVar3) = cVar1;
    }
  }
  sVar2 = FUN_08000bb0(local_18);
  return CONCAT44(local_18[0],(int)sVar2);
}

