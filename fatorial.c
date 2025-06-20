#include <stdio.h>

int main () {
  long long int n, resultado=1;
  scanf("%lld", &n);

  for (long long int i = 1; i <= n; i++)
  {
    resultado *= i;
  }

  printf("%lld\n", resultado);
  

}