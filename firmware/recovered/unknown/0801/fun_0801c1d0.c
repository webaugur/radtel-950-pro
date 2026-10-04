/**
 * @brief fun_0801c1d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c1d0, Ghidra name FUN_0801c1d0, 392 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c1d0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = DAT_0801c35c;
  puVar2 = DAT_0801c358;
  uVar5 = (uint)*(byte *)((int)DAT_0801c358 + 0x16);
  bVar4 = *(byte *)(DAT_0801c35c + uVar5);
  uVar6 = *DAT_0801c358;
  uVar8 = uVar6 / DAT_0801c360 & 0xffff;
  *(short *)(DAT_0801c35c + -0xe) = (short)(uVar6 / DAT_0801c360);
  puVar3 = DAT_0801c358;
  iVar9 = iVar7 + 0xd;
  if (uVar6 < DAT_0801c364) {
    if (uVar6 < DAT_0801c368) {
      if (DAT_0801c36c + uVar6 < DAT_0801c370) {
        uVar6 = (int)(uVar8 - 0x82) / 5 & 0xff;
        if (9 < uVar6) {
          uVar6 = 9;
        }
        bVar1 = *(byte *)(DAT_0801c35c + 0x2a + uVar6);
        if (bVar1 < bVar4) {
          bVar4 = bVar4 - bVar1;
          param_3 = (ushort)(byte)(*(char *)(iVar9 + uVar5) - bVar1);
        }
        iVar7 = 1;
      }
      else if (uVar6 < DAT_0801c374) {
        if (DAT_0801c378 + uVar6 < DAT_0801c37c) {
          bVar4 = *(byte *)(iVar9 + uVar5);
          param_3 = (ushort)(byte)(bVar4 - 10);
          iVar7 = 1;
        }
        else if (uVar6 + DAT_0801c380 < DAT_0801c384) {
          uVar6 = (int)(uVar8 - 0xf) / 5 & 0xff;
          if (0x10 < uVar6) {
            uVar6 = 0x10;
          }
          bVar1 = *(byte *)((int)DAT_0801c358 + (uVar6 - 0x2c));
          if (bVar1 < bVar4) {
            bVar4 = bVar4 - bVar1;
            param_3 = (ushort)(byte)(*(char *)(iVar9 + uVar5) - bVar1);
          }
          iVar7 = 1;
        }
        else {
          bVar4 = *(byte *)(iVar7 + 10);
          iVar7 = 1;
        }
      }
      else {
        bVar1 = *(byte *)((int)DAT_0801c358 + (((int)(uVar8 - 200) / 5 & 0xffU) - 0x4c));
        if (bVar1 < bVar4) {
          bVar4 = bVar4 - bVar1;
          param_3 = (ushort)(byte)(*(char *)(iVar9 + uVar5) - bVar1);
        }
        iVar7 = 2;
      }
    }
    else {
      bVar1 = *(byte *)((int)DAT_0801c358 + (((int)(uVar8 - 0x15e) / 5 & 0xffU) - 0x3c));
      if (bVar1 < bVar4) {
        bVar4 = bVar4 - bVar1;
        param_3 = (ushort)(byte)(*(char *)(iVar9 + uVar5) - bVar1);
      }
      iVar7 = 3;
    }
  }
  else {
    uVar6 = (int)(uVar8 - 400) / 10 & 0xff;
    if (0xb < uVar6) {
      uVar6 = 0xc;
    }
    bVar1 = *(byte *)(DAT_0801c35c + 0x1a + uVar6);
    if (bVar1 < bVar4) {
      bVar4 = bVar4 - bVar1;
      param_3 = (ushort)(byte)(*(char *)(iVar9 + uVar5) - bVar1);
    }
    iVar7 = 0;
  }
  (*(code *)DAT_0801c358[-1])(0x78,param_3 | (ushort)bVar4 << 8);
  uVar5 = *(byte *)(DAT_0801c35c + iVar7 + 0x3f) & 0x7f;
  if (*puVar2 + DAT_0801c388 < 9000) {
                    /* WARNING: Could not recover jumptable at 0x0801c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar3[-1])(0x4f,0x2322);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0801c356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar3[-1])(0x4f,uVar5 - *(byte *)(DAT_0801c35c + 0x43) & 0xff | uVar5 << 8);
  return;
}

