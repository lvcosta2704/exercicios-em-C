#include <stdio.h>

int get_dir(long long x1, long long y1, long long x2, long long y2) {
    if (x2 == x1 && y2 > y1) return 0; // Norte
    if (x2 < x1 && y2 == y1) return 1; // Oeste
    if (x2 == x1 && y2 < y1) return 2; // Sul
    if (x2 > x1 && y2 == y1) return 3; // Leste
    return -1; // nunca acontece
}

int main () {
  long long int n;
  scanf("%lld", &n);
  long long int X[n+1], Y[n+1];
    for (long long int i = 0; i <= n; i++)
    {
      scanf("%lld %lld", &X[i], &Y[i]);
    }
    
    int dir[n];
    for (int i = 0; i < n; i++) {
        dir[i] = get_dir(X[i], Y[i], X[i+1], Y[i+1]);
    }

    int dangerous = 0;
    for (int i = 0; i < n; i++) {
        int cur = dir[i];
        int next = dir[(i+1)%n];
        if (next == (cur + 1) % 4) {
            dangerous++;
        }
    }
    printf("%d\n", dangerous);
    return 0;
}