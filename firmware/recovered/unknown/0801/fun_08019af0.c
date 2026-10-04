/**
 * @brief fun_08019af0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019af0, Ghidra name FUN_08019af0, 140 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08019af0(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  
  piVar1 = DAT_08019b7c;
  do {
    piVar1[piVar1[2] + 3] = 0;
    piVar1[piVar1[2] + 8] = 0;
    piVar1[piVar1[2] + 0xd] = 0;
    *(undefined1 *)((int)piVar1 + piVar1[2] + -0xa3) = 0;
    if (piVar1[2] == 0) {
      if (*piVar1 != DAT_08019b80) {
        FUN_0800e95c(1);
        FUN_080073a4(5);
        return;
      }
      FUN_0801b4c0();
      FUN_080073f8(5);
      return;
    }
    piVar1[2] = piVar1[2] + -1;
    pbVar3 = (byte *)FUN_08012fe8();
    iVar2 = DAT_08019b84;
  } while ((int)((uint)*pbVar3 << 0x1d) < 0);
  if ((piVar1[2] == 0) && (*piVar1 == DAT_08019b88)) {
    *(undefined1 *)(DAT_08019b84 + 3) = 8;
  }
  else {
    *(undefined1 *)(DAT_08019b84 + 3) = 0;
  }
  *(undefined1 *)(iVar2 + 2) = 0;
  FUN_08019a50();
  FUN_080073a4(5);
  return;
}

