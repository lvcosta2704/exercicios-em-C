#include <stdio.h>

int main () {
    int matriz [5][5];
    int linha, coluna, maior, menor, linha_maior, coluna_maior, linha_menor, coluna_menor;
    linha_maior = linha_menor = coluna_maior = coluna_menor = 0;

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
        
    }

    maior = menor = matriz[0][0];

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
           if (matriz[linha][coluna] > maior)
           {
             maior = matriz[linha][coluna];
             linha_maior = linha;
             coluna_maior = coluna;
           }
           else if (matriz[linha][coluna] < menor)
           {
            menor = matriz[linha][coluna];
            linha_menor = linha;
            coluna_menor = coluna;
           }
           
            
        }
        
    }
    printf("%d %d %d\n", maior, linha_maior, coluna_maior);
    printf("%d %d %d", menor, linha_menor, coluna_menor);
}