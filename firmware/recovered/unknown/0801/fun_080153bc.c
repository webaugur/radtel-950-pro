/**
 * @brief fun_080153bc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080153bc, Ghidra name FUN_080153bc, 134 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080153bc(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = param_1;
  if (param_2 < param_1) {
    uVar2 = param_2;
    param_2 = param_1;
  }
  uVar4 = param_3;
  if (param_4 < param_3) {
    uVar4 = param_4;
    param_4 = param_3;
  }
  uVar9 = (param_2 - uVar2) + 1 & 0xffff;
  uVar8 = (param_4 - uVar4) + 1 & 0xffff;
  if ((uVar9 * uVar8 * 2 & 0xffff) < 0x95ff) {
    for (uVar6 = 0; iVar1 = DAT_08015448, uVar6 < uVar8; uVar6 = uVar6 + 1 & 0xffff) {
      uVar3 = uVar4 * *(ushort *)(DAT_08015444 + 0x14) + *(ushort *)(DAT_08015444 + 0x14) * uVar6 +
              uVar2 * 2;
      for (uVar5 = 0; uVar5 < uVar9; uVar5 = uVar5 + 1 & 0xffff) {
        uVar7 = (uVar3 & 0xffff) + 1 & 0xffff;
        *(char *)(iVar1 + (uVar3 & 0xffff)) = (char)((uint)param_5 >> 8);
        uVar3 = uVar7 + 1;
        *(char *)(iVar1 + uVar7) = (char)param_5;
      }
    }
  }
  return;
}

