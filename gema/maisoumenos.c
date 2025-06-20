#include <stdio.h>

int main () {
  int t;
  long long int a,b,resposta;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    scanf("%lld %lld %lld", &a,&b,&resposta);
    if (a+b == resposta) printf("+\n");
    else if(a-b==resposta) printf("-\n");
  }
  
}