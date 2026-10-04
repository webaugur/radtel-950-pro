/**
 * @brief fun_0801e82c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e82c, Ghidra name FUN_0801e82c, 250 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e82c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  
  puVar1 = PTR_DAT_0801e92c;
  puVar5 = PTR_DAT_0801e928;
  uVar4 = *(uint *)(PTR_DAT_0801e928 + 3);
  PTR_DAT_0801e92c[(uint)(byte)PTR_DAT_0801e92c[0xfa] * 0x20 + 0x27f] =
       PTR_DAT_0801e92c[(uint)(byte)PTR_DAT_0801e92c[0xfa] * 0x20 + 0x27f] & 0xfb |
       (byte)((uVar4 & 1) << 2);
  puVar3 = PTR_DAT_0801e93c;
  puVar2 = PTR_DAT_0801e934;
  if ((PTR_DAT_0801e930[0x4a] == -0x5b) && (puVar1[0xfa] == '\x02')) {
    FUN_080158b0(PTR_DAT_0801e938,*(undefined2 *)(puVar1 + 0x108),uVar4 & 0xff);
    if (puVar2[6] == '\0') {
      uVar4 = (uint)(byte)puVar2[(byte)puVar1[0xfa] + 0xd];
    }
    else {
      uVar4 = *(ushort *)(puVar1 + 0x108) / 99 & 0xff;
    }
    puVar5 = PTR_DAT_0801e938 + 0xfa;
    FUN_080158b0(puVar5,uVar4,0);
    uVar6 = 0;
    do {
      if (puVar1[uVar6 + (uVar4 * 99 >> 3) + 0x33e] != '\0') {
        FUN_080158b0(puVar5,uVar4,1);
        break;
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < 0xc);
  }
  else {
    if (PTR_DAT_0801e934[6] == '\0') {
      uVar4 = (uint)(byte)PTR_DAT_0801e934[(byte)puVar1[0xfa] + 0xd];
    }
    else {
      uVar4 = *(ushort *)(puVar1 + 0x108) / 99 & 0xff;
    }
    FUN_080158b0(PTR_DAT_0801e93c,uVar4,0);
    uVar6 = 0;
    do {
      if (puVar1[uVar6 + (uVar4 * 99 >> 3) + 2] != '\0') {
        FUN_080158b0(puVar3,uVar4,1);
        break;
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < 0xc);
    FUN_080158b0(puVar1 + 2,*(undefined2 *)(puVar1 + 0x108),puVar5[3]);
  }
  FUN_08018038();
  return 1;
}

