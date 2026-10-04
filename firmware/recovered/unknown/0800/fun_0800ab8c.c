/**
 * @brief fun_0800ab8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ab8c, Ghidra name FUN_0800ab8c, 236 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ab8c(uint param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = DAT_0800ac78;
  uVar7 = 0xa000;
  if (param_3 == 0) {
    uVar1 = (ushort)((param_1 << 0x11) >> 0x11);
    *(ushort *)(DAT_0800ac78 + 4) = uVar1;
    FUN_08012578();
    uVar5 = DAT_0800ac80;
    if (param_4 == 1) {
      uVar6 = (*(uint *)(iVar2 + 0xc) & DAT_0800ac84 ^ DAT_0800ac88) + DAT_0800ac8c;
      *(uint *)(iVar2 + 0xc) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + 0xc) = uVar6 & uVar5 | 0x800;
      }
    }
    else if (param_4 == 2) {
      *(ushort *)(iVar2 + 4) = uVar1;
      uVar4 = FUN_08021b60(param_1 & 0x7fff);
      *(undefined2 *)(iVar2 + 4) = uVar4;
      FUN_08012578();
      if ((*(uint *)(iVar2 + 0xc) & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & uVar5 | 0x800;
      }
    }
    else if (param_4 == 3) {
      uVar6 = (DAT_0800ac90 & ~*(uint *)(iVar2 + 0xc) | 0xe00) ^ 0xf;
      *(uint *)(iVar2 + 0xc) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + 0xc) = uVar6 & uVar5 | 0x800;
      }
    }
    if (param_2 == 3) {
      uVar7 = 0x8000;
    }
  }
  else {
    *(uint *)(DAT_0800ac78 + 0xc) = param_1;
  }
  iVar3 = DAT_0800ac7c;
  uVar5 = (uint)*(byte *)(DAT_0800ac78 + 0x4c);
  if (*(char *)(DAT_0800ac7c + 0x1a) != '\0') {
    uVar5 = uVar5 + 0x14 & 0xff;
  }
  (**(code **)(DAT_0800ac7c + -4))(0x51,uVar5 & 0x7f | uVar7);
  (**(code **)(iVar3 + -4))(7,0xad7);
  (**(code **)(iVar3 + -4))(8,*(ushort *)(iVar2 + 0xc) & 0xfff);
                    /* WARNING: Could not recover jumptable at 0x0800abe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + -4))(8,(*(uint *)(iVar2 + 0xc) & 0xffffff) >> 0xc | 0x8000);
  return;
}

