/**
 * @brief fun_08003b4c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003b4c, Ghidra name FUN_08003b4c, 212 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003b4c(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  
  iVar3 = DAT_08003c28;
  pcVar2 = DAT_08003c24;
  pcVar1 = DAT_08003c20;
  if (*DAT_08003c20 == '\x01') {
    if (*(short *)(DAT_08003c20 + 4) == 0) {
      pcVar1[4] = '\f';
      pcVar1[5] = '\0';
      pcVar1[0xb] = pcVar1[0xb] + '\x01';
      if (pcVar1[1] == '\0') {
        uVar4 = *(short *)(pcVar1 + 2) - 0xc;
        *(ushort *)(pcVar1 + 2) = uVar4;
        if (uVar4 < 0x46) {
          pcVar1[1] = '\x01';
        }
      }
      else {
        uVar4 = *(short *)(pcVar1 + 2) + 0xc;
        *(ushort *)(pcVar1 + 2) = uVar4;
        if (0xfa < uVar4) {
          pcVar1[1] = '\0';
        }
      }
      if ((*pcVar2 != '\x01') || (*(char *)(iVar3 + 0x11) != '\x02')) {
        if (*(short *)(pcVar1 + 6) == 0) {
          pcVar1[6] = 'd';
          pcVar1[7] = '\0';
          FUN_08015868(2);
          FUN_080158ae(2);
        }
        thunk_FUN_0801c654(*(undefined2 *)(pcVar1 + 2));
        if ((*(char *)(iVar3 + 0x12) != '\0') && (1 < (byte)pcVar1[0xb])) {
          FUN_080207ec(7);
        }
      }
    }
    if ((*(char *)(iVar3 + 0x11) != '\0') && (*(short *)(pcVar1 + 8) == 0)) {
      if (*pcVar2 == '\0') {
        FUN_080207ec(8);
        pcVar1[0xb] = '\0';
        pcVar1[4] = '<';
        pcVar1[5] = '\0';
        FUN_0801a134();
        if (*(char *)(iVar3 + 0x11) == '\x02') {
          FUN_08003aec(0);
        }
        FUN_0801b3fc();
      }
      else {
        FUN_08003aec(0);
        FUN_080229a0();
        do {
        } while (*(short *)(DAT_08003c2c + 0x16) != 0);
        FUN_08015824(1);
        FUN_08003aec(1);
      }
      pcVar1[8] = -0x48;
      pcVar1[9] = '\v';
    }
  }
  return;
}

