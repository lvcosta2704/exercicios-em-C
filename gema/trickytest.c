#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);

        char a[t + 1], b[t + 1], c[t + 1];
        scanf("%s", a);
        scanf("%s", b);
        scanf("%s", c);

        int valid = 0;
        for (int j = 0; j < t; j++) {
            if (a[j] != c[j] && b[j] != c[j]) {
                valid = 1;
                break;
            }
        }

        if (valid)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
