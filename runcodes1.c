#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main () {
    int m, n, i, j, qntsub, x1, x2, y1, y2;
    scanf("%d %d", &m, &n);

    int matriz[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }  
    }

    scanf("%d", &qntsub);

    int soma=0;
    int cont=0;
    for (cont = 0; cont < qntsub; cont++)
    {
        scanf("%d %d %d %d\n", &x1, &y1, &x2, &y2);
        for (i = x1; i <= x2; i++)
        {
            for (j = y1; j <= y2; j++)
            {
                soma = soma + matriz[i][j];
            } 
        }
        printf("%d\n", soma);  
        soma = 0; 
    }
}