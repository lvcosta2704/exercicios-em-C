#include <stdio.h>
int contapares(int numeros[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            cont++;
        }
        
    }
    return cont;  
}
int contaimpares(int numeros[], int n) {
    int cont=0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            cont++;
        }
        
    }
    return cont;  
}

int encontrar_maior(int numeros[], int n) {
    int maior = numeros[0];
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        
    }
    return maior;
}


int encontrar_menor(int numeros[], int n) {
    int menor = numeros[0];
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    return menor;
}

double calcular_media(int numeros[], int n) {
    double media = 0;

    for (int i = 0; i < n; i++)
    {
        media += numeros[i];
    }
    return media/n;
    
}

int contar_acima_media(int numeros[], int n, float media){
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] > media)
        {
            cont++;
        }
        
    }
    return cont;
}
int main () {
int numeros[1001], n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numeros[i]);
    }

    printf("Pares: %d | Impares: %d\n", contapares(numeros, n), contaimpares(numeros, n));
    printf("Maior: %d | Menor: %d\n", encontrar_maior(numeros, n), encontrar_menor(numeros, n));
    printf("Media: %.2f\n", calcular_media(numeros, n));
    printf("Acima da media: %d\n", contar_acima_media(numeros, n, calcular_media(numeros, n)));
}