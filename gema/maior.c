#include <stdio.h>

int main () {
  long long int n;
  long long int maior = 0;
  do
  {
    scanf("%lld", &n);
    if (maior < n) maior = n;
  } while (n != 0) ; 

  printf("%lld\n", maior);
}