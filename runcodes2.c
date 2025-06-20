#include <stdio.h>

int main () {
    int l, s;
    int cont=0;
    int usado[l];

    scanf("%d %d", &l, &s);

    int figlucas[1001] = {0};
    int figsofia[1001] = {0};

    for (int i = 0; i < l; i++) {
        int x;
        scanf("%d", &x);
        figlucas[x] = 1;  // marca tipo
    }

    for (int i = 0; i < s; i++) {
        int x;
        scanf("%d", &x);
        figsofia[x] = 1;  // marca tipo
    }

    int resposta = 0;
    for (int i = 0; i <= 1000; i++) {
        if (figlucas[i] && !figsofia[i]) {
            resposta++;  // conta tipos que Lucas tem e Sofia não
        }
    }

    printf("%d\n", resposta);
    return 0;
}