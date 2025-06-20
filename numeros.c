#include <stdio.h>

int main () {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long resto = n % k;
    long long resposta = (resto == 0) ? n + k : n + (k - resto);
    printf("%lld", resposta);
    return 0;
}