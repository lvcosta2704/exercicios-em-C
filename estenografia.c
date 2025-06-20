#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "avaliador.h"

int main () {
    char nomearquivo[100];
    scanf("%s", nomearquivo);

    FILE *arquivo;
    arquivo = fopen(nomearquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    int largura, altura, intensidade;
    char tipo[3];

    fscanf(arquivo, "%s", tipo); 
    fscanf(arquivo, "%d %d", &largura, &altura);
    fscanf(arquivo, "%d", &intensidade); 

    FILE *saida;
    saida = fopen("imagem_escondida_extraida.ppm", "w");

    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    fprintf(saida, "P3\n");
    fprintf(saida, "%d %d\n", largura, altura);
    fprintf(saida, "255\n");

    int r,g,b;
    for (int i = 0; i < largura*altura; i++)
    {
        fscanf(arquivo, "%d %d %d", &r,&g,&b);
        int r_escondido = r % 256;
        int g_escondido = g % 256;
        int b_escondido = b % 256;

        fprintf(saida, "%d %d %d\n", r_escondido, g_escondido, b_escondido);
    }

    fclose(arquivo);
    fclose(saida);
    
arquivo_finalizado("imagem_escondida_extraida.ppm");
}