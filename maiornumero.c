#include <stdio.h>

int main () {
    int a, b;

    scanf("%i", &a);
    scanf("%i", &b);

    if (a == b) {
        printf("igual\n");
    }
    if  (a > b) {
        printf("%i", a);
    }
    if (a < b) {
        printf("%i", b);
    }
    

}