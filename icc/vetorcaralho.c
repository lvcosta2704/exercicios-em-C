#include <stdio.h>

int main () {
    char letras[10]; 

    printf("Digite algo (scanf convencional)\n");
    scanf("%s", letras);
    fflush(stdin);

    printf("Resultado: %s\n\n", letras);

    printf("Digite algo (scanf apromorado)\n");
    scanf("%9[^\n]", letras);
    fflush(stdin);

    printf("Resultado: %s\n\n", letras);
}