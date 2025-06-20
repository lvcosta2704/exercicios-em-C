#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "avaliador.h"

int main () {
    char imagemog[100];
    char imagemhidden[100];
    scanf("%s", imagemog);
    scanf("%s", imagemhidden);

    FILE *imgog;
    imgog = fopen(imagemog, "r");

    if (imgog == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    FILE *imghi;
    imghi = fopen(imagemhidden, "r");

    if (imghi == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }




    int larguraog, alturaog, intensidadeog, largurahi, alturahi, intensidadehi;
    char tipoog[3], tipohi[3];

    fscanf(imgog, "%s", tipoog); 
    fscanf(imgog, "%d %d", &larguraog, &alturaog);
    fscanf(imgog, "%d", &intensidadeog); 

    fscanf(imghi, "%s", tipohi); 
    fscanf(imghi, "%d %d", &largurahi, &alturahi);
    fscanf(imghi, "%d", &intensidadehi); 

    FILE *saida;
    saida = fopen("imagem_codificada.ppm", "w");

    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    fprintf(saida, "P3\n");
    fprintf(saida, "%d %d\n", larguraog, alturaog);
    fprintf(saida, "65535\n");

    int rog,gog,bog,rhi,ghi,bhi;
    for (int i = 0; i < larguraog*alturaog; i++)
    {
        fscanf(imgog, "%d %d %d", &rog,&gog,&bog);
        fscanf(imghi, "%d %d %d", &rhi,&ghi,&bhi);
        int r_escondido = (rog*256) + rhi;
        int g_escondido = (gog*256) + ghi;
        int b_escondido = (bog*256) + bhi;

        fprintf(saida, "%d %d %d\n", r_escondido, g_escondido, b_escondido);
    }

    fclose(imgog);
    fclose(imghi);
    fclose(saida);
    
arquivo_finalizado("imagem_codificada.ppm");
}