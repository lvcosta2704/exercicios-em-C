#include <stdio.h>

int main () {
    int numeros[10];
    int numerosp[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        numerosp[i] = (numeros[i]*numeros[9-i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numerosp[i]);
    }
    
   
}