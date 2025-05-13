#include <stdio.h>

int main () {
    int matriz [4][5];
    int linha, coluna, soma;

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
        
    }

    for (coluna = 0; coluna < 5; coluna++)
    {
        for (linha = 0; linha < 4; linha++)
        {
            soma = soma + matriz[linha][coluna];
        }
        printf("%d ", soma);
        soma = 0;
    }
    
    
}