#include <stdio.h>

int main() {
    int entrada[20];
    int pares[20], impares[20];
    int *p_entrada = entrada;
    int *p_pares = pares;
    int *p_impares = impares;
    int cont_par = 0, cont_impar = 0;

    for (int i = 0; i < 20; i++) {
        scanf("%d", p_entrada + i);
    }

    int *p = p_entrada;
    int *fim = p_entrada + 20;
    while (p < fim) {
        if (*p % 2 == 0) {
            *(p_pares + cont_par) = *p;
            cont_par++;
        } else {
            *(p_impares + cont_impar) = *p;
            cont_impar++;
        }
        p++;
    }

    // Imprime os pares
    printf("%d", cont_par);
    for (int i = 0; i < cont_par; i++) {
        printf(" %d", *(p_pares + i));
    }
    printf("\n");

    // Imprime os ímpares
    printf("%d", cont_impar);
    for (int i = 0; i < cont_impar; i++) {
        printf(" %d", *(p_impares + i));
    }
    printf("\n");

    return 0;
}
