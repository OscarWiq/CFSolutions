#include <stdio.h>

int main () {

    int n, k, i;
    int a[101];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (a[0] % 2 == a[1] % 2) {
        k = !(a[0] % 2);
    }
    else if (a[0] % 2 != a[1] % 2 && a[0] % 2 == a[2] % 2) {
        k = a[1] % 2;
    }
    else {
        k = a[0] % 2;
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == k) {
            break;
        }
    }
    printf("%d", i + 1);
    return 0;
}
