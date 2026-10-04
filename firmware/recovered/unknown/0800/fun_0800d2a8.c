/**
 * @brief fun_0800d2a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d2a8, Ghidra name FUN_0800d2a8, 450 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d2a8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = DAT_0800d470;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_34 = DAT_0800d46c;
  if (param_1 == 1) {
    uVar5 = FUN_0801328c();
    bVar1 = *(byte *)(iVar2 + 0xfa);
    if (uVar5 != bVar1) {
      uVar3 = FUN_0801328c();
      *(undefined1 *)(iVar2 + 0xfa) = uVar3;
      FUN_0800b604(2);
      *(byte *)(iVar2 + 0xfa) = bVar1;
    }
  }
  else if (param_1 == 2) {
    uVar5 = (uint)*(byte *)(DAT_0800d470 + 0xfa);
    if (uVar5 == 1) {
      iVar7 = 0x8a;
      iVar8 = 0xa9;
      cVar4 = *(char *)(DAT_0800d474 + 0xe);
    }
    else if (uVar5 == 2) {
      iVar7 = 0xe3;
      iVar8 = 0x102;
      cVar4 = *(char *)(DAT_0800d474 + 0xf);
    }
    else {
      iVar7 = 0x31;
      iVar8 = 0x50;
      cVar4 = *(char *)(DAT_0800d474 + 0xd);
    }
    iVar6 = DAT_0800d470 + uVar5 * 0x58;
    if ((*(char *)(iVar6 + 0x130) == '\0') || (cVar4 == '\x01')) {
      FUN_080154a4(0x26,0xca,iVar7,iVar7 + 0x1a,1,0x105);
      FUN_0800b448(0x26,iVar7,**(undefined4 **)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 300),
                   0x105);
      FUN_08015500();
    }
    else if (cVar4 == '\0') {
      uVar5 = **(uint **)(iVar6 + 300);
      FUN_08000850(&local_30,s__03d__05d_0800d47c,uVar5 / DAT_0800d478,
                   uVar5 - DAT_0800d478 * (uVar5 / DAT_0800d478));
      local_28._0_2_ = (ushort)(byte)local_28;
      FUN_080154a4(8,0x50,iVar8,iVar8 + 0x10,1,0x105);
      FUN_08014134(iVar8,8,&local_30,0x10,0x105,0x59b,0);
      FUN_08015500();
    }
    FUN_0800c710(1,*(undefined1 *)
                    ((int)&local_34 +
                    (uint)*(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 0x132)));
  }
  else {
    if (param_1 == 4) {
      FUN_0800c710(0,0,0,1);
      FUN_0800c710(0,0,1);
      FUN_0800c710(0,0,2,1);
    }
    *DAT_0800d488 = 0xffff;
    iVar8 = DAT_0800d48c;
    if (*(char *)(DAT_0800d48c + 1) == '\x01') {
      FUN_0800c710(0,0,0,1);
    }
    else {
      FUN_0800b604(0);
      if ((*(char *)(iVar8 + 1) == '\0') && (*(int *)(DAT_0800d490 + 4) != 0)) {
        if (*(char *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 0x130) == '\x01') {
          FUN_0800b9a8();
        }
        else {
          FUN_0800bbb4();
        }
      }
    }
  }
  return;
}

