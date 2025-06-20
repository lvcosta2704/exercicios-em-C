#include <stdio.h>

int main () {
    int palavra=0;
    char texto[10001];
    int in_palavra=0;

        scanf("%[^\n\t\r]", texto);

       
        for (int i = 0; texto[i] != '\0'; i++) {
            if (texto[i] != ' ' && !in_palavra) {
                in_palavra = 1;
                palavra++;
            } else if (texto[i] == ' ') {
                in_palavra = 0;
            }
        }
       
       
        printf("%d\n", palavra);
    }
   
        
   

