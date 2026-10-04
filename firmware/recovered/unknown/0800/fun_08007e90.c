/**
 * @brief fun_08007e90
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007e90, Ghidra name FUN_08007e90, 360 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007e90(uint param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = DAT_08007ffc;
  iVar4 = DAT_08007ff8;
  if (*(char *)(DAT_08007ff8 + 7) != '\0') {
    *DAT_08007ffc = 1;
    uVar8 = param_1 / 100 & 0xff;
    uVar7 = (param_1 % 100) / 10;
    uVar6 = param_1 % 10;
    cVar2 = (char)(param_1 / 100);
    cVar3 = (char)uVar6;
    cVar1 = (char)uVar7;
    if (*(char *)(iVar4 + 8) == '\x01') {
      if (uVar8 != 0) {
        if ((uVar6 == 0) || (uVar7 == 0)) {
          if (uVar6 == 0 && uVar7 == 0) {
            puVar5[4] = cVar2 + '\x10';
            puVar5[3] = 0x23;
            puVar5[2] = 2;
          }
          else {
            puVar5[6] = cVar2 + '\x10';
            puVar5[5] = 0x23;
            puVar5[2] = 4;
          }
        }
        else {
          puVar5[7] = cVar2 + '\x10';
          puVar5[6] = 0x23;
          puVar5[2] = 5;
        }
      }
      if (uVar7 == 0) {
        if (uVar8 == 0) {
          puVar5[3] = cVar3 + '\x10';
          puVar5[2] = 1;
        }
        else if (uVar6 != 0) {
          puVar5[4] = 0x10;
          puVar5[3] = cVar3 + '\x10';
        }
      }
      else if (uVar6 == 0) {
        puVar5[4] = cVar1 + '\x10';
        puVar5[3] = 0x1a;
        if (uVar8 == 0) {
          puVar5[2] = 2;
        }
      }
      else {
        puVar5[5] = cVar1 + '\x10';
        puVar5[4] = 0x1a;
        puVar5[3] = cVar3 + '\x10';
        if (uVar8 == 0) {
          puVar5[2] = 3;
        }
      }
    }
    else if ((param_1 < 0x14) || (((uVar8 == 0 && (uVar7 != 0)) && (uVar6 == 0)))) {
      if (param_1 < 0xb) {
        puVar5[3] = (char)param_1 + 'L';
      }
      else if (param_1 - 0xb < 9) {
        puVar5[3] = cVar3 + -0x79;
      }
      else {
        puVar5[3] = cVar1 + 'U';
      }
      puVar5[2] = 1;
    }
    else if ((param_1 < 0x65) || ((1 < uVar7 && (uVar6 != 0)))) {
      if ((param_1 < 0x65) || ((uVar7 < 2 || (uVar6 == 0)))) {
        if ((param_1 < 100) || (param_1 != (param_1 / 100) * 100)) {
          puVar5[4] = cVar1 + 'U';
          puVar5[3] = cVar3 + 'L';
        }
        else {
          puVar5[4] = cVar2 + 'L';
          puVar5[3] = 0x5f;
        }
        puVar5[2] = 2;
      }
      else {
        puVar5[6] = cVar2 + 'L';
        puVar5[5] = 0x5f;
        puVar5[4] = cVar1 + 'U';
        puVar5[3] = cVar3 + 'L';
        puVar5[2] = 4;
      }
    }
    else {
      if (uVar7 < 2) {
        puVar5[5] = cVar2 + 'L';
        puVar5[4] = 0x5f;
        if (uVar7 == 1) {
          if (uVar6 == 0) {
            puVar5[3] = 0x56;
          }
          else {
            puVar5[3] = cVar3 + -0x79;
          }
        }
        else {
          puVar5[3] = cVar3 + 'L';
        }
      }
      else {
        puVar5[5] = cVar2 + 'L';
        puVar5[4] = 0x5f;
        puVar5[3] = cVar1 + 'U';
      }
      puVar5[2] = 3;
    }
  }
  return;
}

