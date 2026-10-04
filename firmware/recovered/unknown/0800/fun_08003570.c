/**
 * @brief fun_08003570
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003570, Ghidra name FUN_08003570, 256 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003570(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_08003674;
  iVar3 = DAT_08003670;
  if (*(char *)(DAT_08003670 + 0x33c) != '\x02') {
    if (*(char *)(DAT_08003670 + 0x33c) == '\x01') {
      iVar6 = DAT_08003678 + 0x232e;
      iVar5 = DAT_08003678 + 0x2006;
      uVar1 = *(undefined2 *)(DAT_08003678 + 0x2338);
      if (param_1 == 0) {
        if (*(char *)(DAT_08003674 + 5) != '\x05') {
          FUN_080158b0(iVar5,uVar1,0);
          FUN_08007952(iVar6,3,0);
          *(short *)(iVar3 + 0x338) = *(short *)(iVar3 + 0x338) + 1;
        }
        *(undefined1 *)(iVar4 + 5) = 0;
      }
      else {
        *(char *)(DAT_08003674 + 5) = *(char *)(DAT_08003674 + 5) + '\x01';
        FUN_080158b0(iVar5,uVar1,1);
        FUN_08007952(iVar6,3,param_1);
        *(short *)(iVar3 + 0x338) = *(short *)(iVar3 + 0x338) + 1;
      }
      uVar2 = *(ushort *)(iVar3 + 0x338);
      if (uVar2 < 0x18c0) {
        if (*(char *)(iVar3 + 0x32e) == '~') {
          if (uVar2 < 0x90) {
            *(undefined2 *)(iVar3 + 0x338) = 0;
            *(undefined1 *)(iVar4 + 5) = 0;
          }
          else {
            iVar4 = FUN_08006950(iVar5,(uVar2 >> 3) - 1);
            if (iVar4 != 0) {
              *(undefined1 *)(iVar3 + 0x33c) = 2;
            }
          }
        }
      }
      else {
        *(undefined1 *)(iVar3 + 0x33c) = 0;
      }
    }
    else {
      FUN_08007952(DAT_08003670 + 0x326,5,param_1);
      if ((((*(char *)(iVar3 + 0x326) == '~') && (*(char *)(iVar3 + 0x327) == '~')) &&
          (*(char *)(iVar3 + 0x328) == '~')) &&
         ((*(char *)(iVar3 + 0x329) == '~' && (*(char *)(iVar3 + 0x32a) == '~')))) {
        *(undefined1 *)(iVar3 + 0x33c) = 1;
        *(undefined2 *)(iVar3 + 0x338) = 0;
        *(undefined1 *)(iVar3 + 0x336) = 0;
        *(undefined1 *)(iVar4 + 5) = 0;
      }
    }
  }
  return;
}

