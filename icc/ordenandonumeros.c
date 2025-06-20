#include <stdio.h>

int main () {
int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    
    if (a > c)
    {
        int tmp = c;   
            c = a;
            a = tmp;
    }
    if (a > b) 
    {
        int tmp = b;
        b = a ;
        a = tmp;
    }
    if (b > c) 
    {
        int tmp = c;
        c = b;
        b = tmp; 
    }

    if (a == b || b == c || a == c)
    {
        printf("Erro: os numeros devem ser distintos.");
    }
    else 
    {
        printf("%d %d %d", a, b, c);
    }
    
}