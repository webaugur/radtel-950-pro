/**
 * @brief fun_0802287c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802287c, Ghidra name FUN_0802287c, 122 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0802287c(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_08022900;
  pcVar1 = DAT_080228f8;
  if (*DAT_080228f8 == '\x02') {
    return 0;
  }
  if (*(char *)(DAT_080228fc + 5) != '\0') {
    uVar3 = (uint)*(ushort *)(DAT_080228f8 + 5);
    if (uVar3 < 100) {
      if (uVar3 == (uVar3 / 5) * 5) {
        if (*(char *)(DAT_08022900 + 4) == '\0') {
          FUN_08015868(2);
          *(undefined1 *)(iVar2 + 4) = 1;
        }
      }
      else {
        *(undefined1 *)(DAT_08022900 + 4) = 0;
      }
    }
    if (*(short *)(pcVar1 + 5) != 0) {
      return 0;
    }
    FUN_080229a0();
    *pcVar1 = '\0';
    FUN_0801a9a4(*(undefined1 *)(DAT_08022904 + 0x10a),0);
    thunk_FUN_0801c150(0);
    FUN_080234dc(0x33);
    FUN_08023678(1);
    FUN_0800c940();
    return 1;
  }
  return 0;
}

