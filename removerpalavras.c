#include <stdio.h>

int main () {
    char c;
    char frase[5000];

    scanf("%[^\n]", frase);  
    scanf(" %c", &c);      

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != c) {
            printf("%c", frase[i]);
        }
    }
    printf("\n");

    return 0;
}
