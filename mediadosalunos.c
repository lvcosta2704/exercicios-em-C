#include <stdio.h>

int main () {
    float notas, nota_tot=0;
    int cont=0;

    while (notas >= 0)
    {
        scanf("%f", &notas);
        if (notas >= 0)
        {
            nota_tot += notas;
            cont++;
        }
        
    }
    if (nota_tot > 0)
    {
        printf("A media aritmetica do aluno eh %.2f ", nota_tot/cont);
    }
    else 
    {
        printf("A media aritmetica do aluno eh 0.00");
    }
    
    

}