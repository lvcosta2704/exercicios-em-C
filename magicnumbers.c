#include <stdio.h>
#include <ctype.h>
#include <string.h>
int confere_assinatura(const unsigned char *buffer, const char *assinatura, size_t tamanho) {
    return memcmp(buffer, assinatura, tamanho) == 0; // retornar memcmp(buffer, assinatura, tamanho) == 0 quer dizer TRUE
}

int main () {
    unsigned char buffer[8];
    char nomearquivo[100];
    scanf("%s", nomearquivo);
    
    FILE *arq;
    arq = fopen(nomearquivo, "rb");

    if (arq == NULL)
    {
        printf("O arquivo nao foi aberto");
    }

    fread(buffer, 1, 8, arq);
    fclose(arq);

    const char bmp[] = {0x42, 0x4d};
    const char png[] = {0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a};
    const char gif[] = {0x47, 0x49, 0x46, 0x38};
    const char jpeg[] = {0xff, 0xd8, 0xff};
    const char pdf[] = {0x25, 0x50, 0x44, 0x46};
    const char zip[] = {0x50, 0x4b, 0x03, 0x04};
    const char elf[] = {0x7f, 0x45, 0x4c, 0x46};
    const char wav[] = {0x52, 0x49, 0x46, 0x46};
    const char mp3[] = {0xff, 0xfb};
    const char mp3_2[] = {0x49, 0x44, 0x33};

    if (confere_assinatura(buffer, bmp, 2)) printf("Arquivo BMP\n");
    else if (confere_assinatura(buffer, png, 8)) printf("Arquivo PNG\n");
    else if (confere_assinatura(buffer, gif, 4)) printf("Arquivo GIF\n");
    else if (confere_assinatura(buffer, jpeg, 3)) printf("Arquivo JPEG\n");
    else if (confere_assinatura(buffer, pdf, 4)) printf("Arquivo PDF\n");
    else if (confere_assinatura(buffer, zip, 4)) printf("Arquivo ZIP\n");
    else if (confere_assinatura(buffer, elf, 4)) printf("Arquivo ELF\n");
    else if (confere_assinatura(buffer, wav, 4)) printf("Arquivo WAV\n");
    else if (confere_assinatura(buffer, mp3, 2) || confere_assinatura(buffer, mp3_2, 3)) printf("Arquivo MP3\n");
    else printf("Tipo de arquivo desconhecido\n");
    

    
    
}