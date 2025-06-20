#include <stdio.h>


int v[10], i, *maior, *menor;

int main () {
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }
    
    maior = menor = &v[0];

    for (int i = 0; i < 10; i++)
    {
        if (v[i] > *maior)
        {
            maior = &v[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (v[i] < *menor)
        {
            menor = &v[i];
        }
    }
    
    printf("%d\n", *maior);
    printf("%d\n", *menor);
    
}