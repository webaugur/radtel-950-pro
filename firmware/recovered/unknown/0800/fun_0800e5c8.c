/**
 * @brief fun_0800e5c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e5c8, Ghidra name FUN_0800e5c8, 300 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800e5c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  int local_1c;
  
  uStack_20 = param_3;
  local_1c = param_4;
  FUN_0800e494(*(undefined1 *)(DAT_0800e6f4 + 8));
  FUN_0800a1c4(4);
  FUN_0800a1a8();
  pcVar1 = DAT_0800e6f8;
  if (DAT_0800e6f8[4] == '\0') {
    if (*(char *)(DAT_0800e6fc + 8) == '\x01') {
      FUN_08022908(_DAT_0800e700,&DAT_0800e724,0x10);
    }
    else {
      FUN_08022908(_DAT_0800e700,s_CTCSS_SCAN_0800e713 + 1,0x10);
    }
    FUN_0800c0d8(*(undefined2 *)(DAT_0800e720 + *(int *)(pcVar1 + 8) * 2));
  }
  else {
    if (*(char *)(DAT_0800e6fc + 8) == '\x01') {
      FUN_08022908(_DAT_0800e700,&DAT_0800e734,0x10);
    }
    else {
      FUN_08022908(_DAT_0800e700,s_DCS_SCAN_0800e703 + 1,0x10);
    }
    if (0xdb < *(uint *)(pcVar1 + 8)) {
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
    }
    FUN_0800c0d8(*(undefined4 *)(pcVar1 + 8));
  }
  FUN_08018514();
  iVar2 = _DAT_0800e710;
  *(undefined1 *)(_DAT_0800e710 + 0x14) = 1;
  do {
    FUN_0800a6d4();
    FUN_0801b20e(&uStack_20);
    if (local_1c == 0x12) {
      FUN_0801f1c8();
      FUN_080073a4(2);
LAB_0800e69e:
      if (*(char *)(iVar2 + 1) == '\x01') {
        if (*pcVar1 == '\x04') {
          if (*(char *)(DAT_0800e744 + 7) == '\x01') {
            FUN_0801e78c(*(undefined2 *)(pcVar1 + 6));
          }
          else if (*(char *)(DAT_0800e744 + 7) == '\x02') {
            FUN_0801ed44(*(undefined2 *)(pcVar1 + 6));
          }
          else {
            FUN_0801cc80(*(undefined2 *)(pcVar1 + 6));
          }
          FUN_0800cb78(*(undefined1 *)(DAT_0800e748 + 0xfa),1);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
      }
      return uVar3;
    }
    if (local_1c == 0x11) {
      if (*pcVar1 == '\x04') {
        FUN_080073f8(6);
        goto LAB_0800e69e;
      }
      FUN_080073a4(0);
    }
    else if ((local_1c == 0x13) || (local_1c == 0x15)) {
      *pcVar1 = '\x01';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      FUN_080073f8(3);
    }
    else if (local_1c - 1U < 0x9f) {
      FUN_080073a4(0);
    }
    if (*(char *)(iVar2 + 1) != '\x01') {
      FUN_0801f1c8();
      goto LAB_0800e69e;
    }
    FUN_08023548();
  } while( true );
}

