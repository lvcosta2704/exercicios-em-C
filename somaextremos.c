#include <stdio.h>

int main () {
    int numeros[10], i, maior, menor, soma;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    for ( i = 0; i < 10; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    soma = menor + maior;

    printf("%d", soma);

}