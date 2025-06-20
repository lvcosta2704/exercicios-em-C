#include <stdio.h>
#include "avaliador.h"

int main () {
    char texto[101];
    FILE *arquivo;

    arquivo = fopen("mensagem.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro: arquivo nao encontrado");
    }

    scanf("%s\n", texto);
    fprintf(arquivo,"%s", texto);

    fclose(arquivo);
    


    arquivo_finalizado("mensagem.txt");
}