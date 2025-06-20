#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define MAX_NOME 21

int main() {
    int n; // número de pessoas
    scanf("%d", &n);

    char nomes[MAX][MAX_NOME];
    char *pai[MAX];

    for (int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
        pai[i] = NULL;
    }

    int r; // número de relações pai-filho
    scanf("%d", &r);

    for (int i = 0; i < r; i++) {
        char nomePai[MAX_NOME], nomeFilho[MAX_NOME];
        scanf("%s %s", nomePai, nomeFilho);

        // Encontrar índice do pai
        int idxPai = -1, idxFilho = -1;
        for (int j = 0; j < n; j++) {
            if (strcmp(nomes[j], nomePai) == 0)
                idxPai = j;
            if (strcmp(nomes[j], nomeFilho) == 0)
                idxFilho = j;
        }

        if (idxPai != -1 && idxFilho != -1)
            pai[idxFilho] = nomes[idxPai]; // ponteiro para o nome do pai
    }

    // Nome para consulta
    char consulta[MAX_NOME];
    scanf("%s", consulta);

    // Lista de filhos
    char filhos[MAX][MAX_NOME];
    int countFilhos = 0;

    for (int i = 0; i < n; i++) {
        if (pai[i] != NULL && strcmp(pai[i], consulta) == 0) {
            strcpy(filhos[countFilhos++], nomes[i]);
        }
    }

    if (countFilhos == 0) {
        printf("SEM FILHOS\n");
    } else {
        // Ordenar os filhos em ordem alfabética
        for (int i = 0; i < countFilhos - 1; i++) {
            for (int j = i + 1; j < countFilhos; j++) {
                if (strcmp(filhos[i], filhos[j]) > 0) {
                    char temp[MAX_NOME];
                    strcpy(temp, filhos[i]);
                    strcpy(filhos[i], filhos[j]);
                    strcpy(filhos[j], temp);
                }
            }
        }

        for (int i = 0; i < countFilhos; i++) {
            printf("%s\n", filhos[i]);
        }
    }

    return 0;
}
