/**
 * @brief fun_0801718c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801718c, Ghidra name FUN_0801718c, 218 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801718c(void)

{
  byte bVar1;
  int iVar2;
  char *unaff_r4;
  int unaff_r5;
  int in_stack_00000004;
  
  do {
    FUN_0801b20e();
    iVar2 = FUN_08008aa8();
    if ((iVar2 != 0) && (in_stack_00000004 != 0xff)) {
      if ((in_stack_00000004 == 3) || (in_stack_00000004 == 4)) {
        FUN_080039f8(0);
      }
      in_stack_00000004 = 0xff;
    }
    if (*unaff_r4 == '\x01') {
      FUN_0801b790();
      FUN_0800d830();
      FUN_0800682c();
    }
    else if (*unaff_r4 != '\x02') {
      if (in_stack_00000004 != 0xff) {
        bVar1 = unaff_r4[1];
        if (bVar1 == 7) {
          FUN_0800d5a8();
        }
        else if (bVar1 < 8) {
          switch(bVar1) {
          default:
switchD_080171ce_caseD_0:
            FUN_08019224();
            break;
          case 1:
            FUN_08018744();
            break;
          case 2:
            FUN_08011ff8();
            break;
          case 3:
            FUN_08018cc8();
            break;
          case 4:
            FUN_0801f898();
            break;
          case 5:
            FUN_08018d64();
          }
        }
        else if (bVar1 == 0xb) {
          FUN_080238bc();
        }
        else if (bVar1 == 0x11) {
          FUN_0801b244();
        }
        else if (bVar1 == 0x14) {
          FUN_0800653c();
        }
        else {
          if (bVar1 != 0x15) goto switchD_080171ce_caseD_0;
          FUN_08020eb0();
        }
      }
      FUN_08023548();
    }
    if (*(char *)(unaff_r5 + 2) != '\0') {
      FUN_0800e1c8();
    }
    if (unaff_r4[1] == '\r') {
      FUN_0800de28();
    }
    FUN_08003b4c();
    FUN_0800a6d4();
  } while( true );
}

