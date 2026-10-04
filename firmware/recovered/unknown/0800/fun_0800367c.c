/**
 * @brief fun_0800367c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800367c, Ghidra name FUN_0800367c, 254 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800367c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_0800377c;
  iVar5 = DAT_0800377c + 0x834;
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    iVar6 = *(ushort *)(param_1 + uVar4 * 2) - 0x5be;
    *(int *)(iVar1 + 0x800) = *(int *)(iVar1 + 0x804);
    iVar2 = FUN_0800f1f2(iVar5);
    iVar2 = iVar2 * iVar6 >> 2;
    *(int *)(iVar1 + 0x804) = iVar2;
    *(int *)(iVar1 + 0x808) = *(int *)(iVar1 + 0x80c);
    iVar2 = iVar2 + *(int *)(iVar1 + 0x800) + (*(int *)(iVar1 + 0x80c) >> 1);
    *(int *)(iVar1 + 0x80c) = iVar2;
    uVar3 = *(int *)(iVar1 + 0x810) << 1;
    *(uint *)(iVar1 + 0x810) = uVar3;
    *(uint *)(iVar1 + 0x810) = uVar3 | 0 < iVar2;
    FUN_0800f20e(iVar5,iVar6);
    uVar3 = *(uint *)(iVar1 + 0x810);
    if ((~(uVar3 ^ uVar3 >> 2) & 3) == 0) {
      iVar2 = *(int *)(iVar1 + 0x815);
      if (iVar2 < 0x20) {
        *(int *)(iVar1 + 0x815) = iVar2 + 1;
      }
      else {
        *(int *)(iVar1 + 0x815) = iVar2 + -1;
      }
    }
    iVar2 = *(int *)(iVar1 + 0x815) + 8;
    *(int *)(iVar1 + 0x815) = iVar2;
    if (0x3f < iVar2) {
      *(int *)(iVar1 + 0x815) = iVar2 % 0x40;
      *(char *)(iVar1 + 0x814) = *(char *)(iVar1 + 0x814) << 1;
      uVar3 = uVar3 & 7;
      if ((((uVar3 == 7) || (uVar3 == 6)) || (uVar3 == 5)) || (uVar3 == 3)) {
        iVar2 = FUN_08012d24();
        if (iVar2 == 1) {
          *(byte *)(iVar1 + 0x814) = *(byte *)(iVar1 + 0x814) | 1;
        }
        else {
          *(byte *)(iVar1 + 0x814) = *(byte *)(iVar1 + 0x814) | 2;
        }
      }
      FUN_08003570(((int)((uint)(byte)(*(byte *)(iVar1 + 0x814) ^ *(byte *)(iVar1 + 0x814) >> 1) <<
                         0x1f) >> 0x1f) + 1);
    }
  }
  return;
}

