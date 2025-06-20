#include <stdio.h>
#include <math.h>

int ehprimo (long long int x) {
  if (x == 2) return 1;
  for (int i = 2; i <= sqrt(x); i++)
  {   
    if (x % i == 0) return 0;
  }
  return 1;
}

int main () {
  long long int n;

  scanf("%lld", &n);
  
  if (ehprimo(n)) printf("S\n");
  else printf("N\n");
  
}