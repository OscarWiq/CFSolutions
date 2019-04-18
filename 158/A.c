#include <stdio.h>

int main () {

    int n, k, count = 0;
    int a[50];
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] >= a[k - 1] && a[i] > 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
