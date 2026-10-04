/**
 * @brief fun_0800763c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800763c, Ghidra name FUN_0800763c, 382 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800763c(int param_1)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_DAT_080077c0;
  uVar2 = CONCAT11(PTR_DAT_080077bc[0x11],PTR_DAT_080077bc[0x12]);
  puVar4 = PTR_DAT_080077bc + -0x60;
  puVar3 = PTR_DAT_080077bc + 0x14;
  if (param_1 == 0) {
    if (uVar2 == 0x8000) {
      FUN_08000ee4(PTR_DAT_080077bc + -0x80,PTR_DAT_080077c4,0x60);
      FUN_08000bca(PTR_DAT_080077bc + -0x20,0x20,0xff);
    }
    else if (uVar2 == 0x9000) {
      FUN_08000bca(PTR_DAT_080077bc + -0x40,0x40,0xff);
      FUN_08000ee4(PTR_DAT_080077bc + -0x80,PTR_DAT_080077c8,0x20);
      FUN_08000ee4(puVar4,PTR_DAT_080077cc,0x2d);
    }
    else if (uVar2 == 0xb000) {
      FUN_08000ee4(PTR_DAT_080077bc + -0x80,PTR_DAT_080077c0 + -0x80,0x80);
    }
    else if (uVar2 == 0xb080) {
      FUN_08000ee4(PTR_DAT_080077bc + -0x80,PTR_DAT_080077c0,0x19);
    }
    else {
      FUN_08021824(uVar2,PTR_DAT_080077bc + -0x80,0x80);
    }
    if (uVar2 < 0xf000) {
      FUN_0802025c(PTR_DAT_080077bc + -0x80,puVar3,0x80);
      return;
    }
    FUN_08000f6e(puVar3,PTR_DAT_080077bc + -0x80,0x80);
    return;
  }
  if (uVar2 < 0xf000) {
    FUN_0802025c(puVar3,PTR_DAT_080077bc + -0x80,0x80);
  }
  else {
    FUN_08000f6e(PTR_DAT_080077bc + -0x80,puVar3,0x80);
  }
  if (uVar2 == 0x8000) {
    FUN_08000ee4(PTR_DAT_080077c4,PTR_DAT_080077bc + -0x80,0x60);
    FUN_080105cc(0xff);
    return;
  }
  if (uVar2 == 0x9000) {
    FUN_08000ee4(PTR_DAT_080077c8,PTR_DAT_080077bc + -0x80,0x20);
    FUN_08000ee4(PTR_DAT_080077cc,puVar4,0x2d);
    FUN_08010044();
    return;
  }
  if (uVar2 == 0xb000) {
    FUN_08000ee4(PTR_DAT_080077c0 + -0x80,PTR_DAT_080077bc + -0x80,0x80);
    return;
  }
  if (uVar2 == 0xb080) {
    FUN_08000ee4(puVar1,PTR_DAT_080077bc + -0x80,0x19);
    FUN_0800ff84();
    return;
  }
  if ((uVar2 & 0xfff) == 0) {
    FUN_08021764(uVar2);
  }
  FUN_080219b8(uVar2,PTR_DAT_080077bc + -0x80,0x80);
  return;
}

