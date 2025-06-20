#include <stdio.h>

int main () {

    int i;

    scanf("%i.", &i);

    if (i % 2 == 0) {
        printf("par\n");
    }
    else {
        printf("impar\n");
    }
}