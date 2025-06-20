#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    
    char word1[30];
    char word2[30];
    int pontuacao1=0;
    int pontuacao2=0;

    int pontos[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
        1, 4, 4, 8, 4, 10              
    };
    printf("Jogador 1: ");
    scanf("%s", word1);
    printf("Jogador 2: ");
    scanf("%s", word2);

    for (int i = 0; i < strlen(word1); i++)
    {
        char letra1 = toupper(word1[i]);
        if (letra1 >= 'A' && letra1 <= 'Z')
        {
            pontuacao1 += pontos[letra1 - 'A'];
        }
        
    }
    
    
    for (int i = 0; i < strlen(word2); i++)
    {
        char letra2 = toupper(word2[i]);
        if (letra2 >= 'A' && letra2 <= 'Z')
        {
            pontuacao2 += pontos[letra2 - 'A'];
        }
        
    }

    if (pontuacao1 > pontuacao2)
    {
        printf("\n\nJogador 1 venceu!");
    }
    else 
        printf("\n\nJogador 2 venceu!");
    
}
