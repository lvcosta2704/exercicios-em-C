#include <stdio.h>
#include <string.h>
typedef struct vetor  
{
    char nome[100];
    float nota;
    float frequencia;
}vetor;
vetor disciplinas[150];
int main () {
    char nomearq[51];
    fgets(nomearq, 51, stdin);
    nomearq[strcspn(nomearq, "\r\n")] = 0;

    FILE *arq;
    arq = fopen(nomearq, "r");
    if (arq == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
}
    char linha[150];
    char nome[100];
    float nota, freq;
    int i = 0;
    int contador75=0;
    float somanotas=0;
    float maiornota = -1;
    float menornota = 10;
    char nomemaiornota[50];
    char nomemenornota[50];

    while (fscanf(arq, "%50[^,],%f,%f\n", disciplinas[i].nome, &disciplinas[i].nota, &disciplinas[i].frequencia) == 3)
    {
        if (disciplinas[i].frequencia >= 75)
        {
            somanotas += disciplinas[i].nota;
            contador75++;
        }
        if (disciplinas[i].nota > maiornota)
        {
            maiornota = disciplinas[i].nota;
            strcpy(nomemaiornota, disciplinas[i].nome);
        }
        if (disciplinas[i].nota < menornota)
        {
            menornota = disciplinas[i].nota;
            strcpy(nomemenornota, disciplinas[i].nome);
        }
        i++;
    }
    fclose(arq);
    if (contador75>0){
        printf("Coeficiente de Rendimento: %.2f\n", somanotas/contador75);
    } else printf("Coeficiente de Rendimento: 0.00\n");
    printf("Melhor Disciplina: %s (nota %.2f)\n", nomemaiornota, maiornota);
    printf("Pior Disciplina: %s (nota %.2f)\n", nomemenornota, menornota);
    printf("Disciplinas com frequencia inferior a 75%%:\n");
    for (int j = 0; j < i; j++){
        if (disciplinas[j].frequencia < 75){
            printf("- %s (frequencia %.2f)\n", disciplinas[j].nome, disciplinas[j].frequencia);
        }
        
    }
    
}