/**
 * @brief fun_08017154
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017154, Ghidra name FUN_08017154, 56 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08017154(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_10;
  int local_c;
  
  pcVar2 = DAT_0801726c;
  DAT_0801726c[1] = '\0';
  pcVar2[3] = '\0';
  *pcVar2 = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x34] = '\0';
  pcVar2[0x4b] = '\0';
  uStack_10 = param_3;
  local_c = param_4;
  iVar3 = FUN_08012ace(DAT_08017270,8);
  if ((iVar3 == 0) && (iVar3 = FUN_08013560(), iVar3 == 10)) {
    FUN_0800dc8c();
  }
  FUN_08009730();
  iVar3 = DAT_08017274;
  do {
    FUN_0800a6d4();
    FUN_0801b20e(&uStack_10);
    iVar4 = FUN_08008aa8();
    if ((iVar4 != 0) && (local_c != 0xff)) {
      if ((local_c == 3) || (local_c == 4)) {
        FUN_080039f8(0);
      }
      local_c = 0xff;
    }
    if (*pcVar2 == '\x01') {
      FUN_0801b790(&uStack_10);
      FUN_0800d830();
      FUN_0800682c();
    }
    else if (*pcVar2 != '\x02') {
      if (local_c != 0xff) {
        bVar1 = pcVar2[1];
        if (bVar1 == 7) {
          FUN_0800d5a8(&uStack_10);
        }
        else if (bVar1 < 8) {
          switch(bVar1) {
          default:
switchD_080171ce_caseD_0:
            FUN_08019224(&uStack_10);
            break;
          case 1:
            FUN_08018744(&uStack_10);
            break;
          case 2:
            FUN_08011ff8(&uStack_10);
            break;
          case 3:
            FUN_08018cc8(&uStack_10);
            break;
          case 4:
            FUN_0801f898(&uStack_10);
            break;
          case 5:
            FUN_08018d64(&uStack_10);
          }
        }
        else if (bVar1 == 0xb) {
          FUN_080238bc(&uStack_10);
        }
        else if (bVar1 == 0x11) {
          FUN_0801b244(&uStack_10);
        }
        else if (bVar1 == 0x14) {
          FUN_0800653c(&uStack_10);
        }
        else {
          if (bVar1 != 0x15) goto switchD_080171ce_caseD_0;
          FUN_08020eb0(&uStack_10);
        }
      }
      FUN_08023548();
    }
    if (*(char *)(iVar3 + 2) != '\0') {
      FUN_0800e1c8();
    }
    if (pcVar2[1] == '\r') {
      FUN_0800de28();
    }
    FUN_08003b4c();
  } while( true );
}

