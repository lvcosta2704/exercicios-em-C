#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    // Parte de cima
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i)
                printf("*");
            else
                printf("*\t");
        }
        printf("\n");
    }

    // Parte de baixo
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == i)
                printf("*");
            else
                printf("*\t");
        }
        printf("\n");
    }
}
