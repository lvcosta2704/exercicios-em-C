#include <stdio.h>
int main () {
typedef struct
{
    char fabricante[20];
    char modelo[20];
    int ano;
    char cor[20];
    double preco;
}carro;

    carro carro1;

    scanf("%s", carro1.fabricante);
    scanf("%s", carro1.modelo);
    scanf("%d", &carro1.ano);
    scanf("%s", carro1.cor);
    scanf("%lf", &carro1.preco);

    printf("Fabricante: %s\n", carro1.fabricante);
    printf("Modelo: %s\n", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
    printf("Cor: %s\n", carro1.cor);
    printf("Preço: %.2lf\n", carro1.preco);
    
}
