#include <stdio.h>

int main () {
    int a, b;

    scanf("%d \n", &a);
    scanf("%d", &b);

    for (; a <= b; a++)
    {
        if ((a % 400 == 0) || ((a % 4 == 0) && !(a % 100 == 0)))
        {
            printf("%d \n", a);
        }
        
    }
    

}