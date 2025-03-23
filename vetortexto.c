#include <stdio.h>

int main () {

    char letras[10];

    printf("Digite algo (leitura pelo gets)\n");
    gets(letras);
    fflush(stdin);

    puts("Resultado:");
    puts(letras);
    puts ("");

    printf("Digite algo (leitura pelo fgets) \n");
    fgets(letras, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(letras);



}