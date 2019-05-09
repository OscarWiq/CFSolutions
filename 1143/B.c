#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int product(int n);

int main () {
    int n, i, max = 0, m = 100000;
    scanf("%d", &n);

    for (i = 0; i + m <= n; i += m) {
        int temp = product(i / m) * 9 * 9 * 9 * 9 * 9;
        max = MAX(max, temp);
    }

    for ( ; i <= n; i++) {
        int temp = product(i);
        max = MAX(max, temp);
    }

    printf("%d\n", max);
    return 0;
}

int product(int n) {
    int res = 1;
    while (n > 0) {
        res *= n % 10;
        n /= 10;
    }
    return res;
}
