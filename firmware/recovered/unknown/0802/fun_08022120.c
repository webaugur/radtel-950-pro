/**
 * @brief fun_08022120
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022120, Ghidra name FUN_08022120, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022120(int param_1,byte *param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
  bVar1 = *param_2;
  sVar2 = *(short *)(param_2 + 0xc);
  sVar3 = *(short *)(param_2 + 2);
  sVar4 = *(short *)(param_2 + 0xe);
  sVar5 = *(short *)(param_2 + 4);
  *(ushort *)(param_1 + 4) =
       *(short *)(param_2 + 0x12) << 2 |
       *(short *)(param_2 + 0x10) << 2 | *(ushort *)(param_1 + 4) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = (ushort)bVar1 << 8 | *(ushort *)(param_1 + 0x18) & 0x8cff;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 8);
  *(ushort *)(param_1 + 0x20) =
       sVar5 << 4 |
       (sVar4 << 4 | (sVar3 << 4 | sVar2 << 4 | *(ushort *)(param_1 + 0x20) & 0xffdf) & 0xff7f) &
       0xffbf;
  return;
}

