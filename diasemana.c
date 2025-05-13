#include <stdio.h>

int main () {
int dia_atual, dias_passados, resto;

    scanf("%d %d", &dia_atual, &dias_passados);
    if ((dia_atual <= 7 && dia_atual > 0) && (dias_passados >= 0))
    {
        resto = (dia_atual + dias_passados) % 7;

    switch (resto)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terça-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 0:
        printf("Sabado");
        break;
    }    
    }
    if (!(dia_atual > 0 && dia_atual <= 7))
    {
        printf("Este dia da semana nao existe");
    }
    if (dias_passados < 0)
    {
        printf("Nao eh possivel voltar ao passado");
    }
    
    
    
    
}