/**
 * @brief fun_08019710
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019710, Ghidra name FUN_08019710, 232 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08019710(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_414 [1024];
  
  FUN_08021824((param_1 + -0x10) * 8 + 0x200000,DAT_080197f8,8);
  puVar1 = DAT_080197f8;
  DAT_080197f8[1] = DAT_080197f8[1] + 0x180000;
  if ((*puVar1 < 0xa001) && (*puVar1 != 0)) {
    thunk_FUN_0801c150(0);
    puVar2 = DAT_080197fc;
    *DAT_080197fc = 0x10;
    uVar7 = (int)puVar2 >> 0x14;
    FUN_08021824(puVar1[1],auStack_414,uVar7);
    puVar1[3] = puVar1[1] + 0x400;
    FUN_08025e38();
    uVar5 = uVar7 << 1;
    puVar6 = puVar1 + 6;
    if (*puVar1 < uVar7) {
      uVar4 = FUN_08025d68(auStack_414,puVar6);
      for (uVar7 = (uint)uVar4; uVar7 < uVar5; uVar7 = uVar7 + 1 & 0xffff) {
        *(short *)((int)puVar1 + uVar7 * 2 + 0x18) = (short)uVar5;
      }
    }
    else {
      FUN_08025d68(auStack_414,puVar6,uVar7);
    }
    FUN_080081ac(puVar6,puVar6,uVar5);
    *(undefined1 *)((int)puVar1 + 9) = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    *(undefined1 *)((int)puVar1 + 0x16) = 1;
    puVar1[4] = 0;
    uVar3 = DAT_08019800;
    FUN_0800aa44(DAT_08019800,2,1);
    FUN_0800a9d4(DAT_08019804);
    FUN_0800d518(uVar3,puVar6,uVar5);
    FUN_0800a8c8(0,1);
    FUN_0800a8e8(0,1);
    *(undefined1 *)((int)DAT_080197f8 + -0xb) = 1;
    FUN_0800ad06(0x1e);
    FUN_080207ec(3);
    *(undefined2 *)(DAT_08019808 + 9) = 10;
  }
  return;
}

