#include <stdio.h>
#define MAX 100 

int main () {

    int matriz[MAX][MAX];
    int n, i, j,soma_diagonal=0, soma_diagonal_s=0, soma_tot=0, soma_linha=0, soma_coluna=0, soma_ref=0;

    scanf("%d\n", &n);

    for ( i = 0; i < n; i++) //recebe a matriz
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++) //calcula a soma da diag principal
    {
      for (int j = 0; j < n; j++)
      {
        if (i == j)
        {
            soma_diagonal += matriz[i][j];
        }
      }
    }


    for (int i = 0; i < n; i++) //calcula a soma da diag secundaria
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                soma_diagonal_s += matriz[i][j];
            }
            
        }
        
    }


        // Calcula a soma da primeira linha como referência
    for (int j = 0; j < n; j++) {
        soma_ref += matriz[0][j];
    }

    // Verifica se todas as outras linhas têm a mesma soma
    for (int i = 1; i < n; i++) {
        soma_linha = 0;
        for (int j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
        }
        if (soma_linha != soma_ref) {
            printf("NAO\n");
            return 0;
        }
    }

    // Verifica se todas as colunas têm a mesma soma
    for (int j = 0; j < n; j++) {
        soma_coluna = 0;
        for (int i = 0; i < n; i++) {
            soma_coluna += matriz[i][j];
        }
        if (soma_coluna != soma_ref) {
            printf("NAO\n");
            return 0;
        }
    }

    // Verifica se as diagonais são iguais entre si e com a soma de referência
    if (soma_diagonal == soma_diagonal_s && soma_diagonal == soma_ref) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

        

    
    
    
    
    



    

    
}