#include <stdio.h>

int main () {
int N,i;
double S = 0.0;
    scanf("%d", &N);
    int num = 1;
    int den = 1;
    for ( i = 0; i < N; i++)
    {
        S += (double)num/den;
        num += 2;
        den++; 
    }
    
    printf("%.6f", S);

}