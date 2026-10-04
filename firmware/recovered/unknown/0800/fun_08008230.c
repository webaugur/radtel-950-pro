/**
 * @brief fun_08008230
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008230, Ghidra name FUN_08008230, 402 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08008230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte abStack_39 [2];
  undefined2 uStack_37;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  
  pbVar10 = abStack_39 + 1;
  abStack_39[1] = (byte)param_1;
  uStack_37 = (undefined2)((uint)param_1 >> 8);
  local_35 = (char)((uint)param_1 >> 0x18);
  sVar8 = 0;
  local_2c = DAT_080083c4;
  local_34 = param_2;
  local_30 = param_3;
  FUN_08000fd2(DAT_080083c4,0x7c);
  iVar2 = DAT_080083c4;
  puVar9 = (ushort *)(DAT_080083c4 + -0x7e);
  FUN_08000fd2(DAT_080083c4 + -0x7c,0x7c);
  local_30 = iVar2 + 0x33c;
  FUN_08000fd2(local_30,0x7c);
  local_34 = iVar2 + 0x2c0;
  FUN_08000fd2(local_34,0x7c);
  *(undefined2 *)(iVar2 + 0x3b8) = 0;
  *(undefined2 *)(iVar2 + 0x2be) = 0;
  *(undefined2 *)(iVar2 + 0x3ba) = 0;
  *(undefined2 *)(iVar2 + 0x80) = 0;
  *(undefined2 *)(iVar2 + 0x82) = 0;
  uVar7 = 0;
  do {
    FUN_08021824(sVar8,pbVar10,4);
    if ((abStack_39[1] != 0xff) && (local_35 != '\0')) {
      iVar6 = 0;
      uVar5 = 4;
      do {
        bVar4 = abStack_39[uVar5];
        bVar4 = (bVar4 & 0xf) + (bVar4 >> 4) * '\n';
        abStack_39[uVar5] = bVar4;
        iVar6 = (uint)bVar4 + iVar6 * 100;
        uVar5 = uVar5 - 1 & 0xff;
      } while (uVar5 != 0);
      iVar3 = FUN_080093dc(iVar6);
      if (iVar3 == 1) {
        FUN_080158b0(local_2c,uVar7,1);
        uVar1 = (ushort)(1 << (uVar7 / 99 & 0xff));
        *(ushort *)(iVar2 + 0x80) = *(ushort *)(iVar2 + 0x80) | uVar1;
        *puVar9 = *puVar9 | uVar1;
        FUN_08021824(sVar8 + 0xf,pbVar10,1);
        if ((int)((uint)abStack_39[1] << 0x1d) < 0) {
          FUN_080158b0(iVar2 + -0x7c,uVar7,1);
          *(ushort *)(iVar2 + 0x82) = *(ushort *)(iVar2 + 0x82) | uVar1;
        }
      }
      iVar6 = FUN_08009460(iVar6);
      if (iVar6 == 1) {
        FUN_080158b0(local_30,uVar7,1);
        uVar1 = (ushort)(1 << (uVar7 / 99 & 0xff));
        *(ushort *)(iVar2 + 0x3b8) = *(ushort *)(iVar2 + 0x3b8) | uVar1;
        *(ushort *)(iVar2 + 0x2be) = *(ushort *)(iVar2 + 0x2be) | uVar1;
        FUN_08021824(sVar8 + 0xf,pbVar10,1);
        if ((int)((uint)abStack_39[1] << 0x1d) < 0) {
          FUN_080158b0(local_34,uVar7,1);
          *(ushort *)(iVar2 + 0x3ba) = *(ushort *)(iVar2 + 0x3ba) | uVar1;
        }
      }
    }
    sVar8 = sVar8 + 0x20;
    uVar7 = uVar7 + 1 & 0xffff;
  } while (uVar7 < 0x3de);
  FUN_080099e8();
  bVar4 = *(byte *)(DAT_080083c8 + 0x1a);
  *(byte *)(iVar2 + 0xb2) = bVar4 & 3;
  *(byte *)(iVar2 + 0x10a) = (byte)(((uint)bVar4 << 0x1c) >> 0x1e);
  *(byte *)(iVar2 + 0x162) = (byte)(((uint)bVar4 << 0x1a) >> 0x1e);
  return CONCAT44(local_34,CONCAT13(local_35,CONCAT21(uStack_37,abStack_39[1])));
}

