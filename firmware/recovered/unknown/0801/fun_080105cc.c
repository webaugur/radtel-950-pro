/**
 * @brief fun_080105cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080105cc, Ghidra name FUN_080105cc, 266 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080105cc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_1c;
  
  iVar1 = DAT_080106dc;
  iVar4 = DAT_080106d8;
  local_1c = param_4;
  if (param_1 == 2) {
    iVar6 = FUN_08000e06(DAT_080106dc,DAT_080106d8,0x20,param_4,param_3);
    if (iVar6 == 0) {
      return;
    }
    FUN_08000ee4(iVar1,iVar4,0x20);
  }
  else {
    iVar6 = DAT_080106d8 + -0x24;
    iVar7 = DAT_080106dc + -0x20;
    if (param_1 == 1) {
      iVar4 = FUN_08000e06(iVar7,iVar6,0x20,param_4,param_3);
      if (iVar4 == 0) {
        return;
      }
      FUN_08000ee4(iVar7,iVar6,0x20);
    }
    else {
      iVar8 = DAT_080106d8 + -0x48;
      if (param_1 == 0) {
        iVar4 = FUN_08000e06(DAT_080106dc + -0x40,iVar8,0x20,param_4,param_3);
        if (iVar4 == 0) {
          return;
        }
        FUN_08000ee4(DAT_080106dc + -0x40,iVar8,0x20);
      }
      else if (param_1 != 0xff) {
        FUN_08000ee4(DAT_080106dc + -0x40,iVar8,0x20);
        FUN_08000ee4(iVar7,iVar6,0x20);
        FUN_08000ee4(iVar1,iVar4,0x20);
      }
    }
  }
  uVar3 = FUN_0800a878(DAT_080106dc + -0x40,0x60);
  *(undefined2 *)(DAT_080106dc + 0x20) = uVar3;
  bVar2 = FUN_0800f378(0x8000,6);
  uVar5 = (uint)bVar2;
  if (uVar5 < 0x28) {
    FUN_080219b8((uVar5 + 1) * 0x62 + 0x8010,DAT_080106dc + -0x40,0x62);
    local_1c = (uint)*(byte *)(DAT_080106e0 + (uVar5 & 7));
    FUN_080219b8((bVar2 >> 3) + 0x8000,&local_1c,1);
  }
  else {
    FUN_08021764(0x8000);
    FUN_080219b8(0x8010,DAT_080106dc + -0x40,0x62);
  }
  return;
}

