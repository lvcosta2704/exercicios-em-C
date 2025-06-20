#include <stdio.h>


int main () {
unsigned int expo;
long int num, resultado = 1;

    scanf("%ld %d", &num, &expo);
    


    if (expo == 0)
    {
        printf("1");
    }
    else if (expo == 1)
    {
        printf("%ld", num);
    }
    else
    {
        for (unsigned int i = 1; i <= expo; i++)
        {
            resultado *= num;
        }
        printf("%ld", resultado);
    }
    
    
}