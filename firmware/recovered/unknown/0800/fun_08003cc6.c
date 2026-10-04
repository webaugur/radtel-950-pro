/**
 * @brief fun_08003cc6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003cc6, Ghidra name FUN_08003cc6, 96 bytes.
 *       Not linked into rt950-firmware.
 */

byte FUN_08003cc6(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  uVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + uVar3) >> 1;
    if (bVar1 == 0x20) break;
    *(byte *)((int)param_2 + uVar3) = bVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  uVar4 = (*(byte *)(param_1 + 6) & 0x1f) >> 1;
  bVar1 = (byte)(((uint)*(byte *)(param_1 + 6) << 0x1b) >> 0x18);
  if (param_3 == 0) {
    if (uVar4 != 0) {
      *(undefined1 *)((int)param_2 + uVar3) = 0x2d;
      iVar2 = uVar3 + 1;
      if (9 < uVar4) {
        iVar2 = uVar3 + 2;
        *(undefined1 *)((int)param_2 + uVar3 + 1) = 0x31;
      }
      uVar3 = iVar2 + 1;
      *(byte *)((int)param_2 + iVar2) = (bVar1 >> 4) + (char)(uVar4 / 10) * -10 + '0';
    }
    *(undefined1 *)((int)param_2 + uVar3) = 0;
    return *(byte *)(param_1 + 6) & 1;
  }
  *(byte *)((int)param_2 + 6) = bVar1 >> 4;
  if (uVar4 != 0) {
    return *(byte *)(param_1 + 6) & 1;
  }
  return 1;
}

