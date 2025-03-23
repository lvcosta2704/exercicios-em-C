#include <stdio.h>
#include <string.h>
#include <locale.h>

void senhaCorreta(int ok)
{
    
    if (ok == 0)
    {
        printf("senha correta!\n");
    }
    else
    {
        printf("senha incorreta. tente novamente...\n");
    }
}


int main () {
    setlocale(LC_ALL,"Portuguese");
    char senha[50];
    char nome_usr[50];
    char senha_def[50] = {"chdajepise"};
    int ok;

    printf("---CENTRAL DE INFORMAÇÕES---\n\n");
    printf("Nome de usuario: ");
    gets(nome_usr);
    fflush(stdin);

    printf("\n\nSenha: ");
    gets(senha);
    fflush(stdin);

    ok = strcmp(senha_def, senha);

    senhaCorreta(ok);

    printf("\nPAINEL DE INFORMACOES\n\n");
    printf("Nome de usuario: %s\n", nome_usr);
    printf("Senha: %s\n", senha);
}
