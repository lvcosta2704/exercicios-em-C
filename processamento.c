#include <stdio.h>
#include <stdbool.h>
bool isC(char c)
{
    if(c == 'c' || c == 'b' || c == 'd')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main () {
  int t, n;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);

    for (int i = 0; i < n; i++)
    {
      if (i == n-3)
      {
        printf("%c%c%c", s[i], s[i+1], s[i+2]);
        break;
      }
      else if (i == n-2){
        printf("%c%c", s[i], s[i+1]);
        break;
      }
      if (isC(s[i]) == true && isC(s[i+1]) == false && isC(s[i+2]) == true && isC(s[i+3]) == true && isC(s[i+4]) == false)
      {
        printf("%c%c%c", s[i], s[i+1], s[i+2]);
        printf(".");
        i += 2;
      }
      else if ((isC(s[i]) == true && isC(s[i+1]) == false)) {
        printf("%c%c", s[i], s[i+1]);
        printf(".");
        i += 1;
      }
    }
    printf("\n");
  }
  return 0;
}
