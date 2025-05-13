#include <stdio.h>

int main () {
    int numeros[10];

    for (int i = 0; (i < 10); i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (int i = 9; (i >=0) ; i--)
    {
        printf("%d ", numeros[i]);
    }
    
}