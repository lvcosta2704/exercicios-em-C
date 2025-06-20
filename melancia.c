#include <stdio.h>

int main () {
  long long int w;
  scanf("%lld", &w);
  if (w % 2 == 0 && w > 2) printf("YES\n");
  else printf("NO\n");  
}