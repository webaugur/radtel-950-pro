/**
 * @brief fun_0800864c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800864c, Ghidra name FUN_0800864c, 790 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800864c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bStack_31;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar8 = DAT_08008964;
  iVar7 = DAT_08008964 + param_1 * 0x58;
  *(undefined1 *)(iVar7 + 0x140) = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  iVar4 = FUN_08009580(param_1);
  iVar2 = DAT_08008968;
  if (iVar4 == 0) {
    *(undefined1 *)(iVar7 + 0x130) = 0;
  }
  else if (param_1 == 2) {
    *(byte *)(iVar8 + 0x1e0) = (byte)(((uint)*(byte *)(DAT_08008968 + 0x1a) << 0x1a) >> 0x1e);
  }
  else if (param_1 == 1) {
    *(byte *)(iVar8 + 0x188) = (byte)(((uint)*(byte *)(DAT_08008968 + 0x1a) << 0x1c) >> 0x1e);
  }
  else {
    *(byte *)(iVar8 + 0x130) = *(byte *)(DAT_08008968 + 0x1a) & 3;
  }
  if (*(char *)(iVar7 + 0x130) == '\x01') {
    iVar8 = DAT_08008964 + param_1 * 0x20;
    if (param_2 != 0) {
      if (*(char *)(DAT_0800896c + 6) == '\0') {
        param_3 = (short)(ushort)*(byte *)(DAT_0800896c + param_1 + 0xd) * 0xc60 + param_3 * 0x20;
      }
      else {
        param_3 = param_3 << 5;
      }
      FUN_08021824(param_3,iVar8 + 0x270,0x20);
      FUN_08021824(param_3 + 0x14,iVar7 + 0x149,0xc);
    }
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(iVar8 + 0x270 + uVar6);
      *(byte *)((int)&local_30 + uVar6) = (bVar1 & 0xf) + (bVar1 >> 4) * '\n';
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < 8);
    *(undefined4 *)(iVar7 + 0x110) = 0;
    *(undefined4 *)(iVar7 + 0x11c) = 0;
    uVar6 = 4;
    do {
      *(uint *)(iVar7 + 0x110) = (uint)(&bStack_31)[uVar6] + *(int *)(iVar7 + 0x110) * 100;
      *(uint *)(iVar7 + 0x11c) =
           (uint)*(byte *)((int)&local_30 + uVar6 + 3) + *(int *)(iVar7 + 0x11c) * 100;
      uVar6 = uVar6 - 1 & 0xffff;
    } while (uVar6 != 0);
    *(byte *)(iVar7 + 0x133) = (byte)(((uint)*(byte *)(iVar8 + 0x27f) << 0x1a) >> 0x1e);
    if ((int)((uint)*(byte *)(iVar8 + 0x27f) << 0x18) < 0) {
      *(undefined4 *)(iVar7 + 0x144) = *(undefined4 *)(iVar8 + 0x280);
      *(undefined4 *)(iVar7 + 0x118) = *(undefined4 *)(iVar8 + 0x280);
      *(undefined1 *)(iVar7 + 0x114) = 2;
      *(undefined4 *)(iVar7 + 0x124) = *(undefined4 *)(iVar8 + 0x280);
      *(undefined1 *)(iVar7 + 0x120) = 2;
    }
    else {
      uVar3 = FUN_08012f04(*(undefined2 *)(iVar8 + 0x278));
      *(undefined1 *)(iVar7 + 0x114) = uVar3;
      *(uint *)(iVar7 + 0x118) = (uint)*(ushort *)(iVar8 + 0x278);
      uVar3 = FUN_08012f04(*(undefined2 *)(iVar8 + 0x27a));
      *(undefined1 *)(iVar7 + 0x120) = uVar3;
      *(uint *)(iVar7 + 0x124) = (uint)*(ushort *)(iVar8 + 0x27a);
      *(undefined4 *)(iVar7 + 0x144) = 0;
    }
    *(byte *)(iVar7 + 0x131) = (byte)(((uint)*(byte *)(iVar8 + 0x27f) << 0x19) >> 0x1f);
    *(byte *)(iVar7 + 0x132) = *(byte *)(iVar8 + 0x27e) & 0xf;
    *(byte *)(iVar7 + 0x134) = *(byte *)(iVar8 + 0x27e) >> 4;
    *(byte *)(iVar7 + 0x136) = (byte)(((uint)*(byte *)(iVar8 + 0x27f) << 0x1c) >> 0x1f);
    *(undefined1 *)(iVar7 + 0x137) = *(undefined1 *)(iVar8 + 0x27c);
    *(byte *)(iVar7 + 0x141) = *(byte *)(iVar8 + 0x27d) & 0xf;
    *(byte *)(iVar7 + 0x143) = *(byte *)(iVar8 + 0x27d) >> 4;
    *(byte *)(iVar7 + 0x148) = *(byte *)(iVar8 + 0x27f) & 3;
    *(undefined1 *)(iVar7 + 0x142) = 1;
    if (*(uint *)(iVar7 + 0x110) < *(uint *)(iVar7 + 0x11c)) {
      *(undefined1 *)(iVar7 + 0x138) = 1;
    }
    else if (*(uint *)(iVar7 + 0x110) == *(uint *)(iVar7 + 0x11c)) {
      *(undefined1 *)(iVar7 + 0x138) = 0;
    }
    else {
      *(undefined1 *)(iVar7 + 0x138) = 2;
    }
  }
  else {
    iVar8 = iVar8 + param_1 * 0x24;
    uVar5 = FUN_08023004(iVar8 + 0x2d0,*(undefined1 *)(iVar8 + 0x2e2),param_1);
    *(undefined4 *)(iVar7 + 0x110) = uVar5;
    *(byte *)(iVar7 + 0x138) = *(byte *)(iVar8 + 0x2de) >> 4;
    iVar4 = FUN_0802348c(iVar8 + 0x2e4);
    *(int *)(iVar7 + 0x13c) = iVar4;
    if (*(char *)(iVar7 + 0x138) == '\x01') {
      *(int *)(iVar7 + 0x11c) = iVar4 + *(int *)(iVar7 + 0x110);
    }
    else if (*(char *)(iVar7 + 0x138) == '\x02') {
      *(int *)(iVar7 + 0x11c) = *(int *)(iVar7 + 0x110) - iVar4;
    }
    else {
      *(undefined4 *)(iVar7 + 0x11c) = *(undefined4 *)(iVar7 + 0x110);
    }
    *(byte *)(iVar7 + 0x133) = (byte)(((uint)*(byte *)(iVar8 + 0x2e1) << 0x1a) >> 0x1e);
    if ((int)((uint)*(byte *)(iVar8 + 0x2e1) << 0x18) < 0) {
      *(undefined4 *)(iVar7 + 0x144) = *(undefined4 *)(iVar8 + 0x2ec);
      *(undefined1 *)(iVar7 + 0x114) = 2;
      *(undefined4 *)(iVar7 + 0x118) = *(undefined4 *)(iVar8 + 0x2ec);
      *(undefined1 *)(iVar7 + 0x120) = 2;
      *(undefined4 *)(iVar7 + 0x124) = *(undefined4 *)(iVar8 + 0x2ec);
    }
    else {
      uVar3 = FUN_08012f04(*(undefined2 *)(iVar8 + 0x2d8));
      *(undefined1 *)(iVar7 + 0x114) = uVar3;
      *(uint *)(iVar7 + 0x118) = (uint)*(ushort *)(iVar8 + 0x2d8);
      uVar3 = FUN_08012f04(*(undefined2 *)(iVar8 + 0x2da));
      *(undefined1 *)(iVar7 + 0x120) = uVar3;
      *(uint *)(iVar7 + 0x124) = (uint)*(ushort *)(iVar8 + 0x2da);
      *(undefined4 *)(iVar7 + 0x144) = 0;
    }
    *(byte *)(iVar7 + 0x148) = *(byte *)(iVar8 + 0x2e1) & 3;
    *(byte *)(iVar7 + 0x131) = (byte)(((uint)*(byte *)(iVar8 + 0x2e1) << 0x19) >> 0x1f);
    *(byte *)(iVar7 + 0x132) = *(byte *)(iVar8 + 0x2e0) & 0xf;
    *(byte *)(iVar7 + 0x134) = *(byte *)(iVar8 + 0x2e0) >> 4;
    *(undefined1 *)(iVar7 + 0x136) = *(undefined1 *)(iVar8 + 0x2dd);
    *(byte *)(iVar7 + 0x137) = *(byte *)(iVar8 + 0x2de) & 0x1f;
    *(undefined1 *)(iVar7 + 0x139) = *(undefined1 *)(iVar8 + 0x2e3);
    *(undefined1 *)(iVar7 + 0x141) = *(undefined1 *)(iVar2 + 0xb);
    *(undefined1 *)(iVar7 + 0x143) = *(undefined1 *)(iVar8 + 0x2df);
    *(undefined1 *)(iVar7 + 0x142) = 1;
  }
  *(int *)(iVar7 + 0x128) = iVar7 + 0x110;
  *(int *)(iVar7 + 300) = iVar7 + 0x11c;
  return;
}

