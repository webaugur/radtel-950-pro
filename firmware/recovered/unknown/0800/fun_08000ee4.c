/**
 * @brief fun_08000ee4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000ee4, Ghidra name FUN_08000ee4, 138 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08000ee4(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar6;
  byte in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  puVar3 = param_2;
  if (3 < param_3) {
    uVar7 = (uint)param_1 & 3;
    puVar1 = param_1;
    uVar8 = uVar7;
    if (uVar7 != 0) {
      bVar5 = (byte)*param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar7 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar3;
      if (uVar7 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar5 = (byte)*puVar3;
      }
      param_3 = (param_3 + uVar7) - 4;
      puVar3 = (uint *)((int)param_1 + 1);
      if (uVar7 < 3) {
        puVar3 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar8;
      }
      puVar1 = puVar3;
      if (uVar7 < 2) {
        puVar1 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = bVar5;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      uVar8 = 0;
      while (uVar7 = param_3 - 0x20, 0x1f < param_3) {
        uVar8 = param_2[1];
        uVar9 = param_2[2];
        uVar10 = param_2[3];
        *puVar1 = *param_2;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        uVar8 = param_2[4];
        uVar9 = param_2[5];
        uVar10 = param_2[6];
        uVar11 = param_2[7];
        param_2 = param_2 + 8;
        puVar1[4] = uVar8;
        puVar1[5] = uVar9;
        puVar1[6] = uVar10;
        puVar1[7] = uVar11;
        puVar1 = puVar1 + 8;
        param_3 = uVar7;
      }
      if ((uVar7 & 0x10) != 0) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        param_2 = param_2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        puVar1 = puVar1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        param_2 = param_2 + 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = puVar1 + 2;
      }
      puVar2 = puVar1;
      puVar3 = param_2;
      if ((uVar7 & 4) != 0) {
        puVar3 = param_2 + 1;
        uVar8 = *param_2;
        puVar2 = puVar1 + 1;
        *puVar1 = uVar8;
      }
      uVar6 = (undefined2)uVar8;
      if ((uVar7 & 3) != 0) {
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        puVar1 = puVar3;
        if ((uVar7 & 2) != 0) {
          puVar1 = (uint *)((int)puVar3 + 2);
          uVar6 = (undefined2)*puVar3;
        }
        puVar3 = puVar1;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar1 + 1);
          param_3 = (uint)(byte)*puVar1;
        }
        *(undefined2 *)puVar2 = uVar6;
        pbVar4 = (byte *)((int)puVar2 + 2);
        if (bVar13) {
          pbVar4 = (byte *)((int)puVar2 + 3);
          *(byte *)((int)puVar2 + 2) = (byte)param_3;
        }
        return CONCAT44(puVar3,pbVar4);
      }
      return CONCAT44(puVar3,puVar2);
    }
    while( true ) {
      in_r12 = (byte)uVar8;
      if (param_3 < 8) break;
      puVar3 = param_2 + 1;
      param_4 = *param_2;
      param_2 = param_2 + 2;
      uVar8 = *puVar3;
      *puVar1 = param_4;
      puVar1[1] = uVar8;
      puVar1 = puVar1 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar1;
    puVar3 = param_2;
    if (-1 < (int)param_3) {
      puVar3 = param_2 + 1;
      param_4 = *param_2;
      param_1 = puVar1 + 1;
      *puVar1 = param_4;
    }
  }
  bVar5 = (byte)param_4;
  bVar13 = (param_3 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar12 = (int)param_3 < 0;
  if (bVar13) {
    pbVar4 = (byte *)((int)puVar3 + 1);
    bVar5 = (byte)*puVar3;
    puVar3 = (uint *)((int)puVar3 + 2);
    in_r12 = *pbVar4;
  }
  puVar1 = puVar3;
  if (bVar12) {
    puVar1 = (uint *)((int)puVar3 + 1);
    param_3 = (uint)(byte)*puVar3;
  }
  if (bVar13) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar5;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = in_r12;
  }
  puVar3 = param_1;
  if (bVar12) {
    puVar3 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar1,puVar3);
}

