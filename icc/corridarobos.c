#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char pista[N + 1];         
    char comandos1[1001];
    char comandos2[1001];

    scanf("%s", pista);
    scanf("%s", comandos1);
    scanf("%s", comandos2);

    int pos1 = -1; 
    int pos2 = -1;

    
    for (int i = 0; comandos1[i] != '\0'; i++) {
        int proxima = pos1 + 1;

        if (proxima >= N)
            break;  

        if (comandos1[i] == 'A') {
            if (pista[proxima] == '.') {
                pos1++;
            }
        } else if (comandos1[i] == 'P') {
            if (pista[proxima] == '#') {
                pos1++;
            }
        }
    }

    
    for (int i = 0; comandos2[i] != '\0'; i++) {
        int proxima = pos2 + 1;

        if (proxima >= N)
            break;

        if (comandos2[i] == 'A') {
            if (pista[proxima] == '.') {
                pos2++;
            }
        } else if (comandos2[i] == 'P') {
            if (pista[proxima] == '#') {
                pos2++;
            }
        }
    }

    if (pos1 > pos2)
        printf("1\n");
    else if (pos2 > pos1)
        printf("2\n");
    else
        printf("0\n");

    return 0;
}
