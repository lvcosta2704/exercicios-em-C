#include <stdio.h>

int main () {
    int peso;
    float altura;

    scanf("%d %f", &peso, &altura);

    float imc = peso/(altura*altura);

    if (imc < 18.5)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc >= 18.5 && imc <= 24.99)
    {
        printf("Peso normal\n");
    }
    else if (imc >= 25 && imc <= 29.999)
    {
        printf("Sobrepeso\n");
    }
    else if (imc >= 30) {
        printf("Obesidade\n");
    }    
    

}