/**
 * @brief fun_08020944
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020944, Ghidra name FUN_08020944, 198 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020944(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_08020e3c();
  uVar6 = *(byte *)(*(int *)(param_1 + 4) + param_1 + 0x11) - 0x30 & 0xff;
  if (*(int *)(param_1 + 4) == 6) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    iVar5 = FUN_08000d3a(param_1 + 0x12);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar4 = DAT_08020a14;
    iVar3 = DAT_08020a10;
    if (uVar6 == 9) {
      uVar6 = -(uint)*(byte *)(DAT_08020a0c + 9);
    }
    else {
      uVar6 = (uint)*(byte *)(DAT_08020a0c + uVar6);
    }
    uVar6 = uVar6 + iVar5 * 100;
    cVar1 = *(char *)(DAT_08020a10 + 0x10d);
    uVar2 = *(undefined1 *)(DAT_08020a14 + 0x62);
    if (DAT_08020a18 + uVar6 < DAT_08020a1c) {
      *(undefined1 *)(DAT_08020a14 + 0x62) = 0;
      FUN_0801b70c(1,0);
    }
    else {
      *(undefined1 *)(DAT_08020a14 + 0x62) = 1;
      FUN_0801b70c(1);
    }
    FUN_080134cc(uVar6 / 10000 & 0xffff);
    *(undefined1 *)(iVar4 + 0x62) = uVar2;
    if (*(char *)(iVar3 + 0x10d) != cVar1) {
      FUN_0801b490();
      FUN_0801acde(*(undefined1 *)(iVar3 + 0x10d));
      FUN_08006d24();
    }
    FUN_08021184(uVar6);
    FUN_08020b48(uVar6);
    FUN_08020ce8(uVar6);
    FUN_08020da8(*(undefined4 *)(DAT_08020a20 + 0x24),*(undefined4 *)(DAT_08020a20 + 0x20));
    FUN_080212e4(0);
    return;
  }
  return;
}

