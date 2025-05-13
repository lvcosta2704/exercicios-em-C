#include <stdio.h>

int main () {
    int A[5], B[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &B[i]);
    }

    for ( int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]+B[i]);
    }
    
    

    
    
}