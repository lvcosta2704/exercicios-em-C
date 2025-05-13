#include <stdio.h>

// Função para calcular o comprimento de uma string
int comprimento(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

// Função para verificar se B é substring de A
int eh_substring(char *A, char *B) {
    int lenA = comprimento(A);
    int lenB = comprimento(B);

    if (lenB == 0) return 1;  // string vazia é substring de qualquer string

    for (int i = 0; i <= lenA - lenB; i++) {
        int j = 0;
        while (j < lenB && A[i + j] == B[j]) {
            j++;
        }
        if (j == lenB) {
            return 1;  // substring encontrada
        }
    }

    return 0;  // substring não encontrada
}

int main() {
    char A[5001], B[5001];

    // Lê as duas strings
    scanf("%s", A);
    scanf("%s", B);

    // Verifica se B é substring de A e imprime o resultado
    printf("%d\n", eh_substring(A, B));

    return 0;
}
