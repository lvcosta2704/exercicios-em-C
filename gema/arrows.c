#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char *string;
  string = malloc(101*sizeof(char));
  scanf("%s", string);
  int tam = strlen(string);
  if (string[0] != '<' || string[tam-1] != '>') {
    printf("No\n"); 
    return 0;
  }
  
  for (int i = 1; i < tam-1; i++)
  {
    if (string[i] != '=') {
            printf("No\n");
            free(string);
            return 0;
        }
  }
  printf("Yes\n");

  free(string);
}