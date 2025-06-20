#include <stdio.h>

int main () {
    int matriz [5][5];
    int linha, coluna, tmp[5], tmp2[5];

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        tmp[i] = matriz[2][i];
        matriz[2][i] = matriz[i][2];

    }
    
    for (int i = 0; i < 5; i++)
    {
        matriz[i][2] = tmp[i];
    }


    
    for ( linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}
    
    
    