/**
 * @brief fun_08014718
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014718, Ghidra name FUN_08014718, 298 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014718(uint *param_1,uint *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_08014848;
  iVar6 = DAT_08014848 + 0x16;
  if ((*DAT_08014844 == '\x01') && (iVar3 = FUN_08008aa8(), iVar3 != 1)) {
    if ((*param_1 & 0x90) == 0) {
      *param_2 = 0;
      param_2[1] = 0xff;
    }
    else {
      *param_2 = (uint)*(byte *)(iVar1 + param_1[1]) | *param_1;
      param_2[1] = (uint)*(byte *)(iVar6 + param_1[1]);
    }
    if (param_2[1] == 0x22) {
      param_2[1] = 0x10;
      *param_2 = *param_1 | 0x30;
    }
  }
  else {
    uVar4 = (uint)*(byte *)(iVar6 + param_1[1]);
    param_2[1] = uVar4;
    pcVar2 = DAT_0801484c;
    uVar5 = *param_1;
    if (uVar5 == 0x10) {
      *param_2 = 0;
      param_2[1] = 0xff;
    }
    else {
      if (uVar5 == 0x20) {
        if (uVar4 == 0x13) {
          *param_2 = 0x20;
          param_2[1] = 0x14;
          return;
        }
        if (uVar4 == 0x15) {
          *param_2 = 0x20;
          param_2[1] = 0x16;
          return;
        }
        if (uVar4 == 0x24) {
          *param_2 = 0x20;
          param_2[1] = 0x2f;
          return;
        }
        if (uVar4 != 0x25) {
          *param_2 = 0;
          param_2[1] = 0xff;
          return;
        }
        *param_2 = 0x20;
        param_2[1] = 0x30;
        return;
      }
      iVar6 = DAT_08014848 + 0x2c;
      if (uVar5 == 0x40) {
        *DAT_0801484c = '\x01';
        *param_2 = (uint)*(byte *)(iVar1 + param_1[1]);
        param_2[1] = (uint)*(byte *)(iVar6 + param_1[1]);
      }
      else if (uVar5 == 0x80) {
        if (uVar4 == 0x10) {
          if (*DAT_0801484c == '\0') {
            *param_2 = *(byte *)(iVar1 + param_1[1]) + 0x30;
          }
          else {
            *param_2 = 0;
            param_2[1] = 0xff;
          }
        }
        else if (*DAT_0801484c == '\0') {
          *param_2 = (uint)*(byte *)(iVar1 + param_1[1]);
          if (uVar4 == 0x22) {
            *param_2 = 0x30;
            param_2[1] = 0x10;
          }
        }
        else if (*(char *)(iVar6 + param_1[1]) == '\x05') {
          param_2[1] = 6;
        }
        else {
          *param_2 = 0;
          param_2[1] = 0xff;
        }
        *pcVar2 = '\0';
      }
      else {
        *param_2 = 0;
        param_2[1] = 0xff;
      }
    }
  }
  *DAT_08014850 = 0;
  return;
}

