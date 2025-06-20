#include <stdio.h>

int main () {
  long long int k, n, w;
  scanf("%lld %lld %lld", &k, &n, &w);
  long long int total = k * w * (w + 1) / 2;
  long long int borrow = total - n;
  if (borrow < 0) borrow = 0;
  printf("%lld\n", borrow);
  return 0;
}