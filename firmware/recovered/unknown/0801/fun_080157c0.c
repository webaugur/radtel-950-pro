/**
 * @brief fun_080157c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080157c0, Ghidra name FUN_080157c0, 90 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080157c0(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = DAT_0801581c;
  if (0x13f < (ushort)DAT_0801581c[5]) {
    DAT_0801581c[5] = 0x13f;
  }
  if (0xef < (ushort)puVar3[4]) {
    puVar3[4] = 0xef;
  }
  iVar4 = DAT_08015820;
  sVar1 = puVar3[5];
  sVar2 = puVar3[4];
  uVar5 = (uint)(ushort)((sVar1 - puVar3[7]) * puVar3[10] + (sVar2 - puVar3[6]) * 2);
  if (uVar5 < 0x95ff) {
    *(char *)(DAT_08015820 + uVar5) = (char)((uint)param_1 >> 8);
    *(char *)(uVar5 + iVar4 + 1) = (char)param_1;
    puVar3[4] = sVar2 + 1;
    if ((ushort)puVar3[1] <= (ushort)(sVar2 + 1U)) {
      puVar3[4] = *puVar3;
      puVar3[5] = sVar1 + 1;
    }
  }
  return;
}

