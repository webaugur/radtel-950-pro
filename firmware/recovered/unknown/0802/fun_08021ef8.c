/**
 * @brief fun_08021ef8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021ef8, Ghidra name FUN_08021ef8, 376 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021ef8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_08015868(0);
  FUN_08015824(0);
  FUN_080207ec(0);
  FUN_0800fc74();
  FUN_0800f5fc();
  FUN_0800faf8();
  FUN_0800fbc4();
  iVar2 = DAT_08022074;
  iVar1 = DAT_08022070;
  *(undefined1 *)(DAT_08022074 + 99) = *(undefined1 *)(DAT_08022070 + 0x1b);
  FUN_0800f418();
  if (*DAT_08022078 == '\x01') {
    FUN_080007dc();
  }
  FUN_0800fa34();
  FUN_080109b0();
  FUN_0800fc20();
  FUN_08021824(0xa000,DAT_0802207c);
  FUN_0800bd10();
  FUN_08025f44(200);
  FUN_0801a7c0();
  FUN_08019960();
  FUN_080073f8(4);
  FUN_0801ad58();
  FUN_08006d54();
  FUN_08008230();
  FUN_08019960();
  FUN_080234dc(0x24);
  FUN_0801a7c0();
  if (2 < *(byte *)(iVar1 + 0x18)) {
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  *(undefined1 *)(DAT_08022080 + 0xfa) = *(undefined1 *)(iVar1 + 0x18);
  *(undefined1 *)(DAT_08022084 + 0x11) = 0;
  FUN_0800fd10();
  FUN_08008970();
  FUN_08006ff0();
  uVar3 = DAT_08022088;
  iVar5 = FUN_08012ace(DAT_08022088,8);
  if (((iVar5 == 0) && (iVar5 = FUN_08012ace(uVar3,4), iVar5 == 0)) &&
     (iVar5 = FUN_08013560(), iVar5 == 0x14)) {
    FUN_0800808c(0);
  }
  else {
    iVar5 = FUN_08012ace(uVar3,8);
    if (((iVar5 == 0) && (iVar5 = FUN_08012ace(uVar3,4), iVar5 == 0)) &&
       (iVar5 = FUN_08013560(), iVar5 == 0xc)) {
      FUN_0800808c(1);
    }
  }
  FUN_08018df4();
  FUN_0800ad06(((uint)*(byte *)(DAT_0802208c + 4) % 0xf + 1) * 200);
  FUN_0800a1c4(0);
  FUN_0800b980();
  FUN_08019c8c();
  *DAT_08022090 = 0;
  *(undefined2 *)(iVar2 + 0x1a) = 0;
  FUN_0801b3fc();
  FUN_08014964();
  FUN_0801b334();
  puVar4 = DAT_08022094;
  *DAT_08022094 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = DAT_08022098;
  *DAT_08022098 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_08014534();
  *(undefined1 *)(iVar2 + 0x47) = 0;
  if (*(char *)(iVar1 + 0x1d) == -1) {
    *(undefined1 *)(iVar1 + 0x1d) = 0;
  }
  uVar3 = DAT_0802209c;
  if (*(char *)(iVar1 + 0x1d) == '\0') {
    FUN_08012ae2(DAT_0802209c,0x200);
    return;
  }
  FUN_080077d0();
  FUN_08012ae6(uVar3,0x200);
  return;
}

