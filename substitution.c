#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checakey (const char chave[]) {
    if (strlen(chave) != 26)
    {
        return 0;
    }

    for (int i = 0; chave[i] != '\0'; i++)
    {
        if (!isalpha(chave[i]))
        {
            return 0;
        }

        int letras[26] = {0};

        char c = tolower(chave[i]);
        int idx = c - 'a';

        if (letras[idx]) // se for 1 quer dizer que repetiu, e quebra 
        {
            return 0;
        }

        letras[idx] = 1; // ja foi vista
    }

    return 1;   
}

void encrypt(const char chave[], const char plaintext[], char ciphertext[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        char c = plaintext[i];

        if (isalpha(c)) {
            int idx = tolower(c) - 'a';
            char substituida = chave[idx];

            ciphertext[i] = isupper(c) ? toupper(substituida) : tolower(substituida);
        } else {
            ciphertext[i] = c;  
        }
    }
    ciphertext[tamanho] = '\0';
}
int main () {
    char key[27];
    char plaintext[1000];
    char ciphertext[1000];
    do
    {
        printf("Key: ");
        scanf("%s", key);

        if (!checakey(key))
        {
            printf("Essa chave eh invalida\n");
        }
        
    } while (!checakey(key));


    getchar();

    printf("Insira o Plaintext: \n");
    fgets(plaintext, sizeof(plaintext), stdin);

    size_t len = strlen(plaintext);
        if (len > 0 && plaintext[len - 1] == '\n') {
            plaintext[len - 1] = '\0';
            len--;  
        }

    int tam = strlen(plaintext);
    

    encrypt(key, plaintext, ciphertext, len);

    printf("\nCiphertext: %s", ciphertext);
    

}

