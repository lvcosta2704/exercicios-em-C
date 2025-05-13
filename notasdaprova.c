#include <stdio.h>

int main () {
float nota, media=0, tot_nota=0, porcentagem=0;
int nota_baixa=0, nota_alta=0, n_aluno=0;

    while (nota >= 0)
    {
        scanf("%f", &nota);
        if (nota >= 0)
        {
            if (nota >= 5)
            {
                nota_alta = nota_alta + 1;
            }
            else 
            {
                nota_baixa = nota_baixa + 1;
            }

            tot_nota = tot_nota + nota;
            n_aluno = n_aluno + 1;
        }
        media = (tot_nota / n_aluno);
        porcentagem = ((float)nota_alta / (nota_alta + nota_baixa)) *100;
    }
    printf("%d\n", nota_baixa);
    printf("%d\n", nota_alta);
    printf("%.2f\n", media);
    printf("%.1f%%", porcentagem);

}