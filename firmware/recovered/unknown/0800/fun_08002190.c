/**
 * @brief fun_08002190
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002190, Ghidra name FUN_08002190, 158 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08002190(char *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = false;
  pcVar7 = param_1 + 1;
  bVar2 = false;
  cVar3 = *param_1;
  if (cVar3 == '0') {
    pcVar8 = param_1 + 2;
    cVar3 = *pcVar7;
    bVar1 = true;
    pcVar7 = pcVar8;
    if ((cVar3 == 'x') || (cVar3 == 'X')) {
      if ((param_3 == 0) || (param_3 == 0x10)) {
        bVar1 = false;
        cVar3 = *pcVar8;
        param_3 = 0x10;
        pcVar7 = param_1 + 3;
      }
    }
    else if (param_3 == 0) {
      param_3 = 8;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar9 = 0;
  uVar10 = 0;
  while (iVar5 = FUN_08001728(cVar3,param_3), -1 < iVar5) {
    uVar4 = param_3 * uVar10 + iVar5;
    bVar1 = true;
    uVar10 = uVar4 & 0xffff;
    uVar9 = param_3 * uVar9 + (uVar4 >> 0x10);
    if (0xffff < uVar9) {
      bVar2 = true;
    }
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      param_1 = pcVar7 + -1;
    }
    *param_2 = param_1;
  }
  if (bVar2) {
    puVar6 = (undefined4 *)FUN_080010c4();
    *puVar6 = 2;
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = uVar10 | uVar9 << 0x10;
  }
  return uVar10;
}

