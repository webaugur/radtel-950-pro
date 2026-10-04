/**
 * @brief fun_0800befc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800befc, Ghidra name FUN_0800befc, 330 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800befc(uint param_1,int param_2)

{
  char cVar1;
  ushort *puVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  
  puVar2 = DAT_0800c05c;
  local_28[0] = 0;
  local_28[1] = 0;
  local_30 = DAT_0800c048;
  uStack_2c = DAT_0800c04c;
  local_38 = DAT_0800c050;
  uStack_34 = DAT_0800c054;
  cVar1 = DAT_0800c058[1];
  if ((((cVar1 != '\x0f') && (cVar1 != '\a')) && (cVar1 != '\v')) &&
     ((cVar1 != '\x11' && (cVar1 != '\x14')))) {
    if (*DAT_0800c058 == '\x02') {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x105;
    }
    if (cVar1 == '\x01') {
      sVar4 = 100;
    }
    else if (param_2 == 1) {
      sVar4 = 0xbd;
    }
    else if (param_2 == 2) {
      sVar4 = 0x116;
    }
    else {
      sVar4 = 100;
    }
    if (param_1 == 0xffff) {
      FUN_08000bca(local_28,3,0x20);
      *puVar2 = 0xffff;
      FUN_080154a4(0xd4,0xec,sVar4 + -1,sVar4 + 0x10,1,uVar5);
      FUN_08014f44(sVar4,0xd4,local_28,0x10,uVar5,0xffff,0);
      FUN_08015500();
    }
    else {
      if (param_1 < *(byte *)((int)&local_30 + (uint)*(byte *)(DAT_0800c060 + 0x10a))) {
        FUN_08000bca(local_28,3,0x20);
      }
      else {
        uVar3 = (int)((param_1 - *(byte *)((int)&local_38 + (uint)*(byte *)(DAT_0800c060 + 0x10a)))
                     * 5) / 7 & 0xffff;
        if (uVar3 < 0x60) {
          param_1 = (uVar3 / 10) * 10 & 0xffff;
        }
        else {
          param_1 = 99;
        }
        if (param_1 < 10) {
          FUN_08000bca(local_28,3,0x20);
        }
        else {
          FUN_08000850(local_28,s___02d_0800c064,param_1);
        }
        local_28[0] = local_28[0] & 0xffffff;
      }
      if (*puVar2 != param_1) {
        *puVar2 = (ushort)param_1;
        FUN_080154a4(0xd4,0xec,sVar4 + -1,sVar4 + 0x10,1,uVar5);
        FUN_08014f44(sVar4,0xd4,local_28,0x10,uVar5,0xffff,0);
        FUN_08015500();
      }
    }
  }
  return;
}

