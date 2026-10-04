/**
 * @brief fun_08007984
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007984, Ghidra name FUN_08007984, 580 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007984(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = DAT_08007bd4;
  iVar3 = DAT_08007bd0;
  iVar2 = DAT_08007bcc;
  if (param_2 == 0) {
    uVar7 = (uint)*(byte *)(DAT_08007bcc + 1);
    if (*(char *)(DAT_08007bd0 + 0x1a) != '\0') {
      uVar7 = uVar7 + 0xf & 0xff;
    }
    if (param_1 == 0xa41) {
      (**(code **)(DAT_08007bd0 + -4))(0x51,uVar7 & 0x7f | 0x9400);
    }
    else {
      (**(code **)(DAT_08007bd0 + -4))(0x51,uVar7 & 0x7f | 0x9000);
    }
    (**(code **)(iVar3 + -4))(7,(uint)(param_1 * DAT_08007be8) / DAT_08007bec & 0xffff);
    (**(code **)(iVar3 + -4))(7,0x21cd);
                    /* WARNING: Could not recover jumptable at 0x08007bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + -4))(0x52,0x292);
    return;
  }
  if (param_1 == 0x1f5) {
    if (param_2 == 1) {
      *(undefined2 *)(DAT_08007bcc + -0x46) = 0x15;
      FUN_08012578();
      uVar6 = FUN_0800f1c0(*(undefined4 *)(iVar2 + -0x3e));
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
    else if (param_2 == 2) {
      *(undefined2 *)(DAT_08007bcc + -0x46) = 0x16;
      FUN_08012578();
      uVar6 = FUN_0800f1c0(*(undefined4 *)(iVar2 + -0x3e));
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
    else if (param_2 == 3) {
      *(undefined2 *)(DAT_08007bcc + -0x46) = 0x19;
      FUN_08012578();
      uVar6 = FUN_0800f1c0(*(undefined4 *)(iVar2 + -0x3e));
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
    else if (param_2 == 4) {
      *(undefined2 *)(DAT_08007bcc + -0x46) = 0x1d;
      FUN_08012578();
      uVar6 = FUN_0800f1c0(*(undefined4 *)(iVar2 + -0x3e));
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
  }
  else {
    *(ushort *)(DAT_08007bcc + -0x46) = (ushort)((uint)(param_1 << 0x17) >> 0x17);
    FUN_08012578();
    cVar1 = *(char *)(iVar3 + 0x18);
    if (cVar1 == '\x01') {
      uVar6 = (*(uint *)(iVar2 + -0x3e) & DAT_08007bdc ^ DAT_08007be0) + DAT_08007be4;
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
    else if (cVar1 == '\x02') {
      uVar5 = FUN_08021b60(*(undefined2 *)(iVar2 + -0x46));
      *(undefined2 *)(iVar2 + -0x46) = uVar5;
      FUN_08012578();
      if ((*(uint *)(iVar2 + -0x3e) & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = *(uint *)(iVar2 + -0x3e) & uVar7 | 0x800;
      }
    }
    else if (cVar1 == '\x03') {
      uVar6 = (DAT_08007bd8 & ~*(uint *)(iVar2 + -0x3e) | 0xe00) ^ 0xf;
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
    else if (cVar1 == '\x04') {
      *(uint *)(iVar2 + -0x3e) = (DAT_08007bd8 & ~*(uint *)(iVar2 + -0x3e) | 0xe00) ^ 0xf;
      uVar6 = FUN_0800f1c0();
      *(uint *)(iVar2 + -0x3e) = uVar6;
      if ((uVar6 & 0xfff) >> 9 != 4) {
        *(uint *)(iVar2 + -0x3e) = uVar6 & uVar7 | 0x800;
      }
    }
  }
  bVar4 = 0;
  do {
    uVar7 = *(uint *)(iVar2 + -0x3e);
    if ((uVar7 & 0xfff) >> 9 == 4) break;
    *(uint *)(iVar2 + -0x3e) = (uVar7 & 0x3fffff) << 1 | (uint)((int)(uVar7 << 9) < 0);
    bVar4 = bVar4 + 1;
  } while (bVar4 < 0x17);
  uVar7 = (uint)*(byte *)(iVar2 + 2);
  if (*(char *)(iVar3 + 0x1a) != '\0') {
    uVar7 = uVar7 + 0x14 & 0xff;
  }
  (**(code **)(iVar3 + -4))(0x51,uVar7 & 0x7f | 0xa080);
  (**(code **)(iVar3 + -4))(7,0xad7);
  (**(code **)(iVar3 + -4))(8,*(ushort *)(iVar2 + -0x3e) & 0xfff);
                    /* WARNING: Could not recover jumptable at 0x08007b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + -4))(8,(*(uint *)(iVar2 + -0x3e) & 0xffffff) >> 0xc | 0x8000);
  return;
}

