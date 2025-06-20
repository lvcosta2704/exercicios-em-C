#include <stdio.h>

int main () {
int nota, maior = 0, menor = 1000000;
 
    while (nota >= 0)
    {
        scanf("%d", &nota);

        if (nota >= 0)
        {
            if (nota > maior)
            {
                maior = nota;
            }
            if (nota < menor)
            {
                menor = nota;
            }
        }
        
    }
    
    printf("%d %d", maior, menor);
}