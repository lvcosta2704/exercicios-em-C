#include <stdio.h>

int main () {
    char texto[101];
    char nome[101];
    
    scanf("%99s", nome);

    FILE *arquivo;
    arquivo = fopen(nome, "r");

    if (arquivo == NULL)
    {
        printf("Erro: O arquivo nao abriu");
    }


    for (int i = 0; i < 3; i++) {
        if (fgets(texto, sizeof(texto), arquivo) != NULL) {
            printf("%s", texto);  
        }
    }

    fclose(arquivo);

    return 0;


    
}