#include <stdio.h>
#include <math.h>

int main () {
  float numero;
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%f", &numero);
    printf("\n%f", sqrt(numero));
  }
  
}