#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    char nomearquivo[100];
    scanf("%s", nomearquivo);
    
    FILE *arq;
    arq = fopen(nomearquivo, "rb");

    if (arq == NULL)
    {
        printf("O arquivo nao foi aberto");
    }

    unsigned char buffer[16];
    size_t lidos;

    while ((lidos = fread(buffer, 1, 16, arq)) > 0)
    {
        for (size_t i = 0; i < lidos; i++)
        {
            printf("%02x ", buffer[i]);
        }
        printf("\n");
    }
    
    fclose(arq);
}