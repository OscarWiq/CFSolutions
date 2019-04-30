#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) < (b) ? (b) : (a))

int main () {
    
    int i, j, n, d, k;
    scanf("%d", &n);

    int a[n], min = 100, max = 1;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        min = MIN(a[i], min);
        max = MAX(a[i], max);
    }

    if ((max - min) % 2 == 0) {
        d = (max - min) / 2;
        k = min +d;

        for (i = 0; i < n; i++) {
            if (((a[i] - d != k)) && (a[i] != k) && ((a[i] + d) != k)) {
                printf("-1\n");
                return 0;
            }
        }
        printf("%d\n", d);
    }

    else {
        for (i = 0; i < n; i++) {
            if ((a[i] != min) && (a[i] != max)) {
                printf("-1\n");
                return 0;
            }
        }
        printf("%d\n", max - min);
    }

    return 0;
}
