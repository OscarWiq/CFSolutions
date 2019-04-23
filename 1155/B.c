#include <stdio.h>

int main () {
    
    int n, i, count = 0;
    char s[120000];
    scanf("%d", &n);
    scanf("%s", s);

    for (i = 0; i < n - 10; i++) {
        if (s[i] == '8') {
            count++;
        }
        if (count == (n - 9) / 2) {
            printf("YES\n");
            break;
        }
    }
    if (i == n - 10) {
        printf("NO\n");
    }
    return 0;
}
