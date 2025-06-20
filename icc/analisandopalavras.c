#include <stdio.h>
int tamanho(char palavra[]) {
    int cont=0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        cont++;
    }   
    return cont;
    
}
void inverter(char palavra[]) {
    char temp;
    int j, i;
    for (i = 0, j = tamanho(palavra) - 1; i < j; i++, j--){
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    } 
}
int eh_palindromo(char palavra[]){
    char temp[101];
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        temp[i] = palavra[i];
    }

    inverter(palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] != temp[i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
}  
}
int contar_vogais(char palavra[]) {
    int cont=0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        switch (palavra[i])
        {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
            cont++;
        }
        
    }
    return cont; 
}
int contar_consoantes(char palavra[]) {
    return (tamanho(palavra) - contar_vogais(palavra));
}
void para_maiusculas(char palavra[], char resultado[]) {
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        resultado[i] = palavra[i] - 32;
    }
    printf("Maiuscula: %s\n", resultado);
}
int main () {
char palavra[101];
int ordem_normal[101];
char resultado[101];
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) //salva o conteudo da palavra em uma variavel que nao esta invertida
    {
        ordem_normal[i] = palavra[i];
    }

    if (eh_palindromo(palavra)) //checa se é palindromo
    {
        printf("Palindromo: SIM\n");
    }
    else
    {
        printf("Palindromo: NAO\n");
    }

    
    for (int i = 0; palavra[i] != '\0'; i++) //atribui novamente o valor da palavra sem estar invertida
    {
        palavra[i] = ordem_normal[i];
    }

    printf("Vogais: %d | Consoantes: %d\n", contar_vogais(palavra), contar_consoantes(palavra)); //conta a qntd de vogais e consoantes

    para_maiusculas(palavra, resultado);

    inverter(palavra);

    printf("Invertida: %s\n", palavra); //mostra a palavra invertida

    
    
    

    

    

}