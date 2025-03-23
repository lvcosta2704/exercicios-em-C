#include <stdio.h>

int main () {
    int a, b, c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if (a == b || a == c || b == c)
    {
        printf("Há números iguais\n");
    }
    if (a > b && a > c)
    {
        printf("%i", a);
    }
    if (b > a && b > c)
    {
        printf("%i", b);
    }
    if (c > a && c > b)
    {
        printf("%i", c);
    }
    
    
    

    
}