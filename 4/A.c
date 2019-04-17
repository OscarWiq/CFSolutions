#include <stdio.h>

int main () {
    int w;
    scanf("%d", &w);
    //range check of w is probably unnecessary
    if (w >= 1 && w <= 100) {
        if (w % 2 != 0 || w <= 2) {
            printf("NO");
        }
        else {
            printf("YES");
        }
    }
    else {
        printf("Outside range 1 <= w <= 100");
    }

    return 0;
}
