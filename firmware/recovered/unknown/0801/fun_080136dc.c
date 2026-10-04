/**
 * @brief fun_080136dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080136dc, Ghidra name FUN_080136dc, 268 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080136dc(void)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*DAT_080137e8;
  if (DAT_080137e8[2] != 0) {
    for (uVar1 = 0; uVar1 < DAT_080137e8[2] - 1; uVar1 = uVar1 + 1) {
      pbVar4 = *(byte **)(pbVar4 + DAT_080137e8[uVar1 + 3] * 0x21 + 0x1d);
    }
    pbVar2 = *(byte **)(pbVar4 + DAT_080137e8[DAT_080137e8[2] + 2] * 0x21 + 0x1d);
    pbVar4 = pbVar4 + DAT_080137e8[DAT_080137e8[2] + 2] * 0x21;
    if ((int)((uint)*pbVar2 << 0x1c) < 0) {
      pbVar4 = pbVar2;
    }
    if (*(char *)(DAT_080137ec + 8) != '\x01') {
      if (**(char **)(pbVar4 + 0x18) != '\x02') {
        if (*(char *)(*(int *)(pbVar4 + 0x14) + 2) != '.') {
          FUN_08022908(DAT_080137f0,*(int *)(pbVar4 + 0x14) + 2,0x10);
          return;
        }
      }
      FUN_08022908(DAT_080137f0,*(int *)(pbVar4 + 0x14) + 3,0x10);
      return;
    }
    pcVar3 = *(char **)(pbVar4 + 0x18);
    if ((*pcVar3 != '\x02') && (pcVar3[2] != '.')) {
      FUN_08022908(DAT_080137f0,pcVar3 + 2,0x10);
      return;
    }
    FUN_08022908(DAT_080137f0,pcVar3 + 3,0x10);
    return;
  }
  if (-1 < (int)((uint)*pbVar4 << 0x1c)) {
    FUN_08001016(DAT_080137f0 + -8,0x48);
    return;
  }
  if (*(char *)(DAT_080137ec + 8) != '\x01') {
    pcVar3 = *(char **)(pbVar4 + 0x14);
    if (*pcVar3 == '\a') {
      FUN_08022908(DAT_080137f0,pcVar3 + 2,0x10);
      return;
    }
    if ((**(char **)(pbVar4 + 0x18) != '\x02') && (pcVar3[2] != '.')) {
      FUN_08022908(DAT_080137f0,pcVar3,0x10);
      return;
    }
    FUN_08022908(DAT_080137f0,pcVar3 + 3,0x10);
    return;
  }
  pcVar3 = *(char **)(pbVar4 + 0x18);
  if (*pcVar3 == '\a') {
    FUN_08022908(DAT_080137f0,pcVar3 + 2,0x10);
    return;
  }
  if ((*pcVar3 != '\x02') && (pcVar3[2] != '.')) {
    FUN_08022908(DAT_080137f0,pcVar3,0x10);
    return;
  }
  FUN_08022908(DAT_080137f0,pcVar3 + 3,0x10);
  return;
}

