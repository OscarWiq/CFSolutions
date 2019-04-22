#include <stdio.h>

int main () {

    long long n;
    scanf("%lld", &n);
    char s[n + 1];
    scanf("%s", s);

    for (int i = 1; i < n; i++) {
        if (s[i - 1] > s[i]) {
            printf("YES\n");
            printf("%d %d\n", i, i + 1);
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}



