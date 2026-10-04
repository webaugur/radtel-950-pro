/**
 * @brief fun_08022be0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022be0, Ghidra name FUN_08022be0, 182 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022be0(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_20 [8];
  int local_18;
  int local_14;
  
  *(ushort *)(param_1 + 0x10) = *(ushort *)((int)param_2 + 6) | *(ushort *)(param_1 + 0x10) & 0xcfff
  ;
  *(ushort *)(param_1 + 0xc) =
       *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2) |
       *(ushort *)((int)param_2 + 10) | *(ushort *)(param_1 + 0xc) & 0xe9f3;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_2 + 3) | *(ushort *)(param_1 + 0x14) & 0xfcff;
  FUN_0801a680(auStack_20);
  if (param_1 == DAT_08022c98) {
    local_18 = local_14;
  }
  if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x10) < 0) {
    uVar2 = (uint)(local_18 * 0x19) / (uint)(*param_2 << 1);
  }
  else {
    uVar2 = (uint)(local_18 * 0x19) / (uint)(*param_2 << 2);
  }
  if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x10) < 0) {
    uVar1 = (ushort)(((uVar2 % 100) * 8 + 0x32) / 100) & 7;
  }
  else {
    uVar1 = (ushort)(((uVar2 % 100) * 0x10 + 0x32) / 100) & 0xf;
  }
  *(ushort *)(param_1 + 8) = uVar1 | (ushort)(uVar2 / 100 << 4);
  return;
}

