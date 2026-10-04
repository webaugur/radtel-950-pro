/**
 * @brief fun_08000d54
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000d54, Ghidra name FUN_08000d54, 36 bytes.
 *       Not linked into rt950-firmware.
 */

char * FUN_08000d54(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  pcVar4 = param_1;
LAB_08000d5c:
  cVar1 = *pcVar3;
  cVar2 = *param_1;
  if (cVar2 != '\0') goto code_r0x08000d66;
  goto LAB_08000d6a;
code_r0x08000d66:
  param_1 = param_1 + 1;
  pcVar3 = pcVar3 + 1;
  if (cVar2 != cVar1) {
LAB_08000d6a:
    pcVar3 = pcVar4;
    if ((cVar1 == '\0') || (pcVar3 = (char *)0x0, cVar2 == '\0')) {
      return pcVar3;
    }
    param_1 = pcVar4 + 1;
    pcVar3 = param_2;
    pcVar4 = param_1;
  }
  goto LAB_08000d5c;
}

