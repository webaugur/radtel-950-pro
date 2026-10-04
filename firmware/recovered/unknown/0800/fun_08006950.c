/**
 * @brief fun_08006950
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006950, Ghidra name FUN_08006950, 288 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08006950(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_224;
  undefined1 auStack_220 [512];
  
  local_224 = 0xffff;
  uVar6 = param_2 - 2;
  for (uVar4 = 0; uVar4 < uVar6; uVar4 = uVar4 + 1) {
    FUN_080068c8(*(undefined1 *)(param_1 + uVar4),&local_224);
  }
  local_224 = (uint)(ushort)~(ushort)local_224;
  if (*(ushort *)(param_1 + param_2 + -2) == local_224) {
    FUN_08000ee4(auStack_220,param_1,param_2 + -2);
    FUN_08003cc6(param_1,DAT_08006a70,0);
    FUN_08003cc6(param_1 + 7,DAT_08006a70 + -7,1);
    iVar1 = DAT_08006a70;
    iVar5 = 0xe;
    uVar7 = 0;
    for (uVar4 = 0xe;
        (uVar4 < uVar6 &&
        ((*(char *)(param_1 + uVar4) != '\x03' || (*(char *)(param_1 + uVar4 + 1) != -0x10))));
        uVar4 = uVar4 + 1) {
      uVar7 = uVar7 + 1 & 0xff;
    }
    uVar4 = 0;
    do {
      if (uVar7 / 7 <= uVar4) break;
      FUN_08003cc6(param_1 + iVar5,uVar4 * 7 + iVar1 + 7,1);
      iVar5 = iVar5 + 7;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 7);
    if (*(char *)(param_1 + iVar5) == '\x03') {
      if (*(char *)(param_1 + iVar5 + 1) == -0x10) {
        iVar3 = DAT_08006a70 + 0x5e;
        uVar7 = 0;
        uVar4 = iVar5 + 2;
        while (uVar4 < uVar6) {
          *(undefined1 *)(iVar3 + uVar7) = *(undefined1 *)(param_1 + uVar4);
          if (0x7e < uVar7) break;
          uVar7 = uVar7 + 1;
          uVar4 = uVar4 + 1;
        }
        *(undefined1 *)(iVar3 + uVar7) = 0;
        *(undefined1 *)(iVar1 + -0x1c) = 1;
        if (((*(char *)(DAT_08006a74 + 0x27) == '\x01') ||
            (*(char *)(DAT_08006a74 + 0x27) == '\x02')) &&
           ((*(char *)(DAT_08006a74 + 0x77) == '\x01' || (*(char *)(DAT_08006a74 + 0x77) == '\x03'))
           )) {
          FUN_08014854(auStack_220,uVar6 & 0xffff);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

