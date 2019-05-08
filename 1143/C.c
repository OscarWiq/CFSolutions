#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, count = 0;
    scanf("%d", &n);

    int *p = (int *) calloc(n + 1, sizeof(int));
    int *c = (int *) calloc(n + 1, sizeof(int));
    int *condition = (int *) calloc(n + 1, sizeof(int));
    for (int i = 0; i <= n; i++) {
        condition[i] = 1;
    }

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        scanf("%d", &c[i]);
        if (c[i] == 0 && p[i] != -1) {
            condition[p[i]] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (condition[i] == 1 && c[i] == 1) {
            if (count > 0) {
                printf(" ");
            }
            printf("%d", i);
            count++;
        }
    }

    if (count == 0) {
        printf("-1\n");
    }

    return 0;
}
