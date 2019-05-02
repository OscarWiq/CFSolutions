#include <stdio.h>

int main () {

    int a[100];
    int n, i, count = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) {
        if (a[i] != 1 && a[i - 1] != 1) {
            printf("Infinite\n");
            return 0;
        }
    }

    printf("Finite\n");

    for (i = 1; i < n; i++) {
        count += a[i] == 1 ? a[i - 1] + 1 : i >= 2 && a[i] == 2 && a[i - 2] == 3 ? 2 : a[i] + 1;
    }

    printf("%d\n", count);
    return 0;
}
