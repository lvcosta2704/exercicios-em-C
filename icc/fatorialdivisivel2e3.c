#include <stdio.h>
int eh_divisivel2 (int a) {
    if (a % 2 == 0)
    {
        return 1;
    }
    else return 0; 
}
int eh_divisivel3 (int a) {
    if (a % 3 == 0)
    {
        return 1;
    }
    else return 0; 
}
int fatorial (int a) {
    int fat;
    for (fat = 1; a > 1; a--)
    {
        fat = fat * a;
    }
    return fat;
}
void menu() {
    printf("1 - Fatorial\n");
    printf("2 - Divisivel por 2\n");
    printf("3 - Divisivel por 3\n");
    printf("4 - Sair\n");

}

int main () {
int escolha, num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    while(escolha < 1 || escolha > 4) {
        menu();
        scanf("%d", &escolha);
    }

    switch (escolha)
    {
    case 1:
        printf("Fatorial deste numero: %d", fatorial(num));
        break;
    case 2:
        printf("Eh divisivel por 2: %d", eh_divisivel2(num));
        break;
    case 3:
        printf("Eh divisivel por 3: %d", eh_divisivel3(num));
        break;
    case 4:
        return 0;
        break;
    }
}