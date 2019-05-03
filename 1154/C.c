#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))


int main () {

    int arr[] = {1, 2, 3, 1, 3, 2, 1, 1, 2, 3, 1, 3, 2, 1};
    int a, b, c, at, bt, ct, x, i, j, max;
    scanf("%d%d%d", &a, &b, &c);

    x = MIN((a / 3), MIN((b / 2), (c / 2)));
    a -= 3 * x;
    b -= 2 * x;
    c -= 2 * x;

    max = 0;
    for (i = 0; i < 7; i++) {
        at = a;
        bt = b;
        ct = c;

        for (j = i; j < 14; j++) {
            if ((arr[j] == 1 && at-- == 0) || (arr[j] == 2 && bt-- == 0) || (arr[j] == 3 && ct-- == 0)) {
                break;
            }
        }
        if (max < j - i) {
            max = j - i;
        }
    }
    printf("%d\n", max + x * 7);
    return 0;
}
