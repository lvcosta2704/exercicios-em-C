#include <stdio.h>

int main () {
    int numero[10];
    int maior_diff=0, diferenca=0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numero[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        diferenca = numero[i+1] - numero[i];
          if (diferenca < 0)
          {
             diferenca = -diferenca;
          }
          if (diferenca > maior_diff)
          {
            maior_diff = diferenca;
          }
        
    }
    printf("%d", maior_diff);
    

    
}