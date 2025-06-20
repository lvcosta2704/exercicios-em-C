#include <stdio.h>

int main () {
  int consulta, xi, yi;
  char comandos[500000];

  scanf("%d %d %d", &consulta,&xi,&yi);
  scanf("%s", comandos);

  for (int i = 0; i < consulta; i++)
  {
    if (comandos[i] == 'C') xi--;
    else if (comandos[i] == 'B') xi++;
    else if (comandos[i] == 'E')  yi--;
    else if (comandos[i] == 'D') yi++;
  }

  printf("%d, %d", xi, yi);
  
}