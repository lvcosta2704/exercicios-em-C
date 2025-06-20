#include <stdio.h>

int main () {
  int p1,c1,p2,c2;

  scanf("%d %d %d %d", &p1,&c1,&p2,&c2);

  if (p1*c1==p2*c2)
  {
    printf("0");
  }
  else if (p1*c1>p2*c2) {
    printf("-1");
  }
  else printf("1");
  
}