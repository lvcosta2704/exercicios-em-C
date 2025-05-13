#include <stdio.h>


    int main() {
        int numeros[10], i, j, temp;
        
        for (i = 0; i < 10; i++) {
            scanf("%d", &numeros[i]);
        }
        
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9 - i; j++) {
                if (numeros[j] > numeros[j + 1]) {
                    temp = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = temp;
                }
            }
        }
        
        for (i = 0; i < 10; i++) {
            printf("%d ", numeros[i]);
        }
        
        return 0;
    }
    