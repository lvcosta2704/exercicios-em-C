#include <stdio.h>

int main () {
  int n;
  long long int numeros[1000];
  int iguais=1, maxiguais=1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &numeros[i]);
  }
  for (int i = 0; i < n; i++)
  {
    if (numeros[i] == numeros[i-1])
    {
      iguais++;
      if (maxiguais < iguais) maxiguais = iguais;
    } else iguais=1;
    
  }
  
  printf("%d\n", maxiguais);
}