#include <stdio.h>

int main () {
    int l1, l2, l3;

    scanf("%d %d %d", &l1, &l2, &l3);
    
    if ((l1 + l2 > l3) && (l2 + l3 > l1) && (l1 + l3 > l2))
    {
        printf("Triangulo Valido");
    }
    else 
    {
        printf("Triangulo Invalido");
    }
}