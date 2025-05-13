#include <stdio.h>

int main () {
    int numero[10];
    int soma=0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numero[i]);
    }
    for (int i = 1; i < 10; i+=2)
    {
        soma = soma + numero[i];
    }
    printf("%d", soma);
    
    
}