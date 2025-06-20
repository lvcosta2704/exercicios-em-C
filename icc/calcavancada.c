#include <stdio.h>
#include <math.h>

int main () {
    int modo, operacao;
    double numeroA, numeroB, resultado;

    while (1)
    {
        int n = scanf("%d", &modo);
        if (n != 1) break;
        if (modo == 0) break;

        scanf("%d", &operacao);
        if (modo == 1)
        {
            scanf("%lf %lf", &numeroA, &numeroB);
            switch (operacao)
            {
            case 1:
                resultado = numeroA+numeroB;
                printf("%.2lf\n", resultado);
                break;
            case 2:
                resultado = numeroA-numeroB;
                printf("%.2lf\n", resultado);
                break;
            case 3: 
                resultado = numeroA*numeroB;
                printf("%.2lf\n", resultado);
                break;
            case 4: 
            if (numeroB == 0)   printf("Erro\n");
            else {
                resultado = numeroA/numeroB;
                printf("%.2lf\n", resultado);
                break;
            }
            }
        }
         else if (modo == 2) {
            if (operacao == 1) {
                scanf("%lf %lf", &numeroA, &numeroB);
                resultado = pow(numeroA, numeroB);
                printf("%.2lf\n", resultado);
            }
            else if (operacao == 2) {
                scanf("%lf", &numeroA);
                if (numeroA < 0) {
                    printf("Erro\n");
                } else {
                    resultado = sqrt(numeroA);
                    printf("%.2lf\n", resultado);
                }
            }
            else if (operacao == 3) {
                scanf("%lf", &numeroA); 
                if (numeroA <= 0) {
                    printf("Erro\n");
                } else {
                    resultado = log(numeroA);
                    printf("%.2lf\n", resultado);
                }
            }
        
        }
          
    }
    
}