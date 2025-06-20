#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  long long int division;

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &division);
    if (division >= 1900) printf("Division 1\n");
    else if (division >= 1600 && division <= 1899) printf("Division 2\n");
    else if (division >=1400 && division <= 1599) printf("Division 3\n");
    else if (division <= 1399) printf("Division 4\n");
  }
}