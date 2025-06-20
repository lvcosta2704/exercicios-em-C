#include <stdio.h>
#include <ctype.h>
#include <string.h>

void encrypt(char palavra[], int chave) {
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (isalpha(palavra[i])) {
            char base = isupper(palavra[i]) ? 'A' : 'a';
            palavra[i] = (palavra[i] - base + chave) % 26 + base;
        }
    }
}

int main() {
    int key;
    char palavra[1000];

    printf("Key: ");
    scanf("%d", &key);
    getchar();  

    printf("Plaintext: ");
    fgets(palavra, sizeof(palavra), stdin);

    
    palavra[strcspn(palavra, "\n")] = '\0';

    encrypt(palavra, key);

    printf("Ciphertext: %s\n", palavra);

    return 0;
}
