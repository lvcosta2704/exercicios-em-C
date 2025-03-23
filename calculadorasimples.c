#include <stdio.h>

int main () {
    int a, b, calc;
    char c;
    float calcd;

    scanf("%d %d %c", &a, &b, &c);

    if (c == '+'|| c == '-' || c == '/'|| c == '*')
    {
        switch (c)
        {
        case '*':
            calc = a * b;
            printf("%d", calc);
            break;
        case '+':
            calc = a + b;
            printf("%d", calc);
            break;
        case '-':
            calc = a - b;
            printf("%d", calc);
            break;
        case '/':
            if (b == 0)
            {
               printf("Erro: divisao por zero");
            }
            else {  
            calcd = (float) a / b;
            printf("%.2f", calcd);
            break;
            }
        } 
    }
    
    else {
        printf("Erro: operacao invalida");
    }


    
        
    
    
}