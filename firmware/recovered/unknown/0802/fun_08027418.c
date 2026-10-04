/**
 * @brief fun_08027418
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027418, Ghidra name FUN_08027418, 110 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027418(undefined1 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  dword local_1c;
  undefined4 uStack_18;
  
  bVar4 = false;
  local_1c = DWORD_08027488;
  uStack_18 = DAT_0802748c;
  *(short *)(param_1 + 0x14c) = (short)param_3;
  *param_1 = 1;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar3 = 0;
    do {
      bVar1 = *(byte *)((int)&local_1c + uVar3);
      if ((*(byte *)(param_2 + uVar2) & bVar1) == 0) {
        if (bVar4) {
          param_1[uVar2] = param_1[uVar2] & ~bVar1;
        }
        else {
          param_1[uVar2] = param_1[uVar2] | bVar1;
        }
      }
      else if (bVar4) {
        param_1[uVar2] = param_1[uVar2] | bVar1;
      }
      else {
        param_1[uVar2] = param_1[uVar2] & ~bVar1;
      }
      bVar4 = (param_1[uVar2] & bVar1) != 0;
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 8);
    param_1[uVar2] = ~param_1[uVar2];
  }
  return;
}

