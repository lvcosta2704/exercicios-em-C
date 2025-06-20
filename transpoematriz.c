#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
    int i, j, m, n;

    scanf("%d %d\n", &m, &n);

    int matriz[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
}