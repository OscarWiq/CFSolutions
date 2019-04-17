#include <stdio.h>
#include <string.h>

int main () {

    int n, a;
    scanf("%d", &n);
    char s[1337];

    for (int i = 1; i <= n; i++) {
        scanf("%s", s);

        if (strlen(s) > 10) {
            a = strlen(s);
            printf("%c", s[0]);
            printf("%d", (a - 2));
            printf("%c\n", s[a - 1]);
        }
        else {
            printf("%s\n", s);
        }
    }

    return 0;
}
