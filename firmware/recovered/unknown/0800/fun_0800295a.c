/**
 * @brief fun_0800295a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800295a, Ghidra name FUN_0800295a, 228 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_0800295a(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1 << 1;
  uVar4 = param_2 << 0xb;
  uVar2 = param_1 << 0xb | param_2 >> 0x15;
  uVar1 = (param_1 & 0x7fffffff) >> 0x13;
  if (iVar5 != 0 || param_2 != 0) {
    uVar1 = uVar1 + 0x7800;
  }
  uVar1 = (uint)((param_1 & 0x80000000) != 0) << 0x1f | uVar1 >> 1;
  if (iVar5 != 0 || param_2 != 0) {
    uVar2 = uVar2 | 0x80000000;
  }
  if (iVar5 >> 0x15 != 0) {
    if (iVar5 >> 0x15 == -1) {
      uVar1 = uVar1 | 0x40000000;
    }
    return CONCAT44(uVar2,uVar1);
  }
  if ((uVar2 & 0x80000000) == 0) {
    return CONCAT44(uVar2,uVar1);
  }
  uVar3 = uVar2 & 0x7fffffff;
  if (uVar3 == 0) {
    if ((param_2 & 0x1fffff) >> 5 == 0) {
      uVar4 = param_2 << 0x1b;
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0;
    }
    if (uVar4 >> 0x18 == 0) {
      uVar4 = uVar4 << 8;
      iVar5 = iVar5 + 8;
    }
    if (uVar4 >> 0x1c == 0) {
      uVar4 = uVar4 << 4;
      iVar5 = iVar5 + 4;
    }
    if (uVar4 >> 0x1e == 0) {
      uVar4 = uVar4 << 2;
      iVar5 = iVar5 + 2;
    }
    if (-1 < (int)uVar4) {
      uVar4 = uVar4 << 1;
      iVar5 = iVar5 + 1;
    }
    return CONCAT44(uVar4,(uVar1 - 0x1f) - iVar5);
  }
  if (uVar3 >> 0x10 == 0) {
    uVar3 = uVar2 << 0x10;
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0;
  }
  if (uVar3 >> 0x18 == 0) {
    uVar3 = uVar3 << 8;
    iVar5 = iVar5 + 8;
  }
  if (uVar3 >> 0x1c == 0) {
    uVar3 = uVar3 << 4;
    iVar5 = iVar5 + 4;
  }
  if (uVar3 >> 0x1e == 0) {
    uVar3 = uVar3 << 2;
    iVar5 = iVar5 + 2;
  }
  if (-1 < (int)uVar3) {
    uVar3 = uVar3 << 1;
    iVar5 = iVar5 + 1;
  }
  return CONCAT44(uVar3 | uVar4 >> (0x20U - iVar5 & 0xff),(uVar1 - iVar5) + 1);
}

