#include <stdio.h>

int main () {
  long long int x;
  scanf("%lld", &x);
  for (long long int i = 1; i <= x; i++)
  {
    if (x % i == 0)
    {
      printf("%lld ", i);
    }
  }
  
}