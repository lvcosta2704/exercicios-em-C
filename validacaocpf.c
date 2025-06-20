#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
  char cpf[15];
  scanf("%s", cpf);
  int digitos[11], j=0;

  for (int i = 0; i < 14; i++){
    if (isdigit(cpf[i]))
    {
      digitos[j] = cpf[i] - '0';
      j++;
    }
  }
  int soma=0;
  for (int i = 0; i < 9; i++){
    soma += digitos[i] * (10-i);
  }
  int resto = soma%11;
  int d10;
  if (resto < 2){d10 = 0;}
  else if(resto >= 2) {d10 = 11 - resto;}

  //segundo digito
  soma=0;
  for (int i = 0; i < 9; i++){
    soma += digitos[i] * (11-i);
  }
  soma += d10*2;
  resto = soma%11;
  int d11;
  if (resto < 2){d11 = 0;}
  else if(resto >= 2) {d11 = 11 - resto;}

  if (d10 == digitos[9] && d11 == digitos[10])
  {
    printf("CPF valido\n");
  } else printf("CPF invalido\n");
  return 0;  
}