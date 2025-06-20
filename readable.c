#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int contaletras(char frase[]) {
    int contador=0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (isalpha(frase[i]))
        {
        contador++;
        }
    }
    return contador;  
}
int contapalavra (char frase[]){
    int contador=1;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            contador++;
        }
        
    }
    return contador;  
}

int contafrase(char frase[]) {
    int contador=0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == '.' || frase[i] == '!' || frase[i] == '?')
        {
            contador++;
        }   
    }
    return contador;
}

int main () {
    char frase[2000];

    fgets(frase, sizeof(frase), stdin);

    int letras = contaletras(frase);
    int palavras = contapalavra(frase);
    int frases = contafrase(frase);
  
    
    float L = (float)letras / palavras * 100;
    float S = (float)frases / palavras * 100;
    
    float index = 0.0588 * L - 0.296 * S - 15.8;

    int indexpronto = round(index);

    printf("\nGrade %.0f", index); 
    
    

}