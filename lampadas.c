#include <stdio.h>

int main () {
  int ia,ib,fa,fb;

  scanf("%d %d %d %d", &ia,&ib,&fa,&fb);

  if (ib == fb)
  {
    if (ia==fa)
    {
      printf("0\n");
    } else
    printf("1\n");
  }
  
  if (ib!=fb)
  {
    if (ia!=fa)
    {
      printf("1\n");
    } else
    printf("2\n");
  }
  

}