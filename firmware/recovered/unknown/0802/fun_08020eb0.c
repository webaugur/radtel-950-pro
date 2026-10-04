/**
 * @brief fun_08020eb0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020eb0, Ghidra name FUN_08020eb0, 598 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020eb0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_08021560;
  iVar7 = DAT_08021504;
  iVar3 = DAT_08021070;
  iVar2 = DAT_0802106c;
  puVar1 = DAT_08021068;
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 == 0x18) {
    *(byte *)(DAT_08021504 + 4) = (byte)(*(char *)(DAT_08021504 + 4) + 1U) % 7;
    *(undefined1 *)(iVar7 + 10) = *(undefined1 *)(DAT_08021508 + (uint)*(byte *)(iVar7 + 5));
    FUN_080213b4();
    iVar2 = DAT_0802150c;
    FUN_08021184(*(undefined4 *)(DAT_0802150c + 0x1c));
    FUN_08020b48(*(undefined4 *)(iVar2 + 0x14));
    FUN_08020ce8(*(undefined4 *)(iVar2 + 0x14));
    FUN_08020da8(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x20));
    FUN_08020a40(*(undefined1 *)(iVar7 + 4),*(undefined1 *)(iVar7 + 5));
    FUN_080212e4(0);
    return;
  }
  if ((int)uVar5 < 0x19) {
    iVar7 = DAT_08021068[1];
    if (uVar5 == 0x12) {
      if (iVar7 == 0) {
        FUN_08021104(1);
        return;
      }
      DAT_08021068[1] = iVar7 + -1;
      *(undefined1 *)((int)puVar1 + iVar7 + 0x11) = 0x20;
      if (puVar1[1] != 0) {
        *puVar1 = 0x32;
        FUN_08020e3c();
        return;
      }
      FUN_08020b48(*(undefined4 *)(iVar2 + 0x14));
      return;
    }
    if ((int)uVar5 < 0x13) {
      if (uVar5 == 2) {
        if (*(char *)(DAT_0802106c + 0x28) != '\x02') {
          FUN_080073a4(7);
          return;
        }
        FUN_080215ec(*(undefined4 *)(DAT_0802106c + 0x10));
        *(undefined1 *)(iVar2 + 0x28) = 0;
        FUN_0801acce();
        FUN_080207ec(6);
        FUN_08015824(0);
        FUN_08021228();
        FUN_080073a4(1);
        return;
      }
      if (uVar5 == 0x10) {
        *(undefined1 *)((int)DAT_08021068 + iVar7 + 0x12) = *param_1;
        *puVar1 = 0x32;
        if ((uint)puVar1[1] < 0x40) {
          puVar1[1] = puVar1[1] + 1;
        }
        FUN_08020944(DAT_08021068);
        return;
      }
      if (uVar5 == 0x11) {
        uVar5 = (uint)(byte)(*(char *)(DAT_08021560 + 5) + 1) % 6;
        *(char *)(DAT_08021560 + 5) = (char)uVar5;
        *(undefined1 *)(iVar6 + 10) = *(undefined1 *)(DAT_08021564 + uVar5);
        FUN_080213b4();
        iVar2 = DAT_08021568;
        FUN_08021184(*(undefined4 *)(DAT_08021568 + 0x1c));
        FUN_08020b48(*(undefined4 *)(iVar2 + 0x14));
        FUN_08020ce8(*(undefined4 *)(iVar2 + 0x14));
        FUN_08020da8(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x20));
        FUN_08020a40(*(undefined1 *)(iVar6 + 4),*(undefined1 *)(iVar6 + 5));
        FUN_080212e4(0);
        return;
      }
    }
    else {
      iVar7 = *(int *)(DAT_08021070 + 0xc);
      if (uVar5 == 0x13) {
        iVar6 = *(int *)(DAT_08021070 + 0x14);
        if (iVar7 < iVar6) {
          *(int *)(DAT_08021070 + 0xc) = iVar7 + 2;
          if (iVar6 < iVar7 + 2) {
            *(int *)(iVar3 + 0xc) = iVar6;
          }
          uVar4 = FUN_080212c0((int)*(short *)(iVar3 + 0xc));
          *(undefined2 *)(iVar2 + 10) = uVar4;
        }
        FUN_080073a4(1);
        return;
      }
      if (uVar5 == 0x15) {
        iVar6 = *(int *)(DAT_08021070 + 0x10);
        if (iVar6 < iVar7) {
          *(int *)(DAT_08021070 + 0xc) = iVar7 + -2;
          if (iVar7 + -2 < iVar6) {
            *(int *)(iVar3 + 0xc) = iVar6;
          }
          uVar4 = FUN_080212c0((int)*(short *)(iVar3 + 0xc));
          *(undefined2 *)(iVar2 + 10) = uVar4;
        }
        FUN_080073a4(2);
        return;
      }
      if (uVar5 == 0x17) {
        *(byte *)(DAT_08021070 + 0xb) = *(char *)(DAT_08021070 + 0xb) + 1U & 1;
        FUN_08020ae0();
        FUN_08021074(*(undefined1 *)(iVar3 + 0xb));
        return;
      }
    }
  }
  else {
    if (uVar5 == 0x2e) {
      FUN_08021104(1);
      return;
    }
    if ((int)uVar5 < 0x2f) {
      if (uVar5 == 0x1c) {
        FUN_08020a24();
        FUN_080073a4(1);
        return;
      }
      if (uVar5 == 0x24) {
        FUN_0802142c(0);
        FUN_080073a4(2);
        return;
      }
      if (uVar5 == 0x25) {
        FUN_0802142c(1);
        FUN_080073a4(1);
        return;
      }
    }
    else {
      if (uVar5 == 0x2f) {
        FUN_0802142c(0);
        return;
      }
      if (uVar5 == 0x30) {
        FUN_0802142c(1);
        return;
      }
    }
  }
  if (uVar5 < 0xa0) {
    FUN_080073a4(0);
    return;
  }
  return;
}

