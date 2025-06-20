#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    char especie[31];
    int idade;
    char servico[31];
    char data[15];
    char hora[10];
} Agendamento;

void imprimir_agendamento(const Agendamento *dog) {
    printf("Nome: %s\n", dog->nome);
    printf("Especie: %s\n", dog->especie);
    printf("Idade: %d anos\n", dog->idade);
    printf("Serviço: %s\n", dog->servico);
    printf("Data agendada: %s\n", dog->data);
    printf("Hora agendada: %s\n", dog->hora);
}

void limpa_fim(char *s) {
    int i = strlen(s) - 1;
    while (i >= 0 && (s[i] == '\n' || s[i] == '\r')) {
        s[i] = '\0';
        i--;
    }
}

int main () {
    char nomearq[101];
    char nome_procurado[51];

    // Lê o nome do arquivo
    fgets(nomearq, 101, stdin);
    limpa_fim(nomearq);

    // Lê o nome do pet (com espaços)
    fgets(nome_procurado, 51, stdin);
    limpa_fim(nome_procurado);

    FILE *arq = fopen(nomearq, "r");
    if (!arq) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Agendamento dog;
    int encontrou = 0;
    while (fscanf(arq, "%50[^;];%30[^;];%d;%30[^;];%14[^;];%9[^\n]\n",
                  dog.nome, dog.especie, &dog.idade, dog.servico, dog.data, dog.hora) == 6) {
        limpa_fim(dog.nome); // remove \r ou \n do nome lido do arquivo
        if (strcmp(dog.nome, nome_procurado) == 0) {
            imprimir_agendamento(&dog);
            encontrou = 1;
        }
    }
    fclose(arq);

    if (!encontrou) {
        printf("Nenhum agendamento encontrado para o pet informado.");
    }
    return 0;
}