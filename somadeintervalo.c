#include <stdio.h>

int main () {

    int a, b, soma = 0;
    

    scanf("%d %d", &a, &b); 

    for (; a <= b; a++)
    {
        soma = soma += a;
    }
    
    printf("%d", soma);


}