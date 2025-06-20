#include <stdio.h>

int main () {
    FILE *arquivo;
    char nome_arquivo[101];
    char texto[101];
    int letra=0;
    int c;

    scanf("%100s", nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");

    while ((c = fgetc(arquivo) != EOF))
    {
        letra++;
    }
    

    fclose(arquivo);

    printf("%d", letra);
    
}