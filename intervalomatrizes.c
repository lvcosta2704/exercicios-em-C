#include <stdio.h>

int main () {
    int matriz [4][5];
    int linha, coluna, A, B, contador=0;

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
        
    }
    scanf("%d %d", &A, &B);

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            if (matriz[linha][coluna] >= A && matriz[linha][coluna] <= B)
            {
                contador++;
            }
            
        }
        
    }
    printf("%d", contador);
}
