#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, j, n, h, t;
    scanf("%d%d%d", &n, &h, &t);

    int a[100];
    for (i = 0; i < 90; i++) {
        a[i] = h;
    }

    int x, y, z;
    for (i = 0; i < t; i++) {
        scanf("%d%d%d", &x, &y, &z);
        for (j = x - 1; j <= y - 1; j++) {
            if (a[j] > z) {
                a[j] = z;
            }
        }
    }
    
    int p = 0;
    for (i = 0; i < n; i++) {
        p += a[i] * a[i];
    }

    printf("%d\n", p);

    return 0;
}
