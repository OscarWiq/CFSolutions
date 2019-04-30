#include <stdio.h>

int main () {

    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int temp;
    if (d < a){
        temp = a;
        a = d;
        d = temp;
    }

    if (d < b) {
        temp = b;
        b = d;
        d = temp;
    }

    if (d < c) {
        temp = c;
        c = d;
        d = temp;
    }

    printf("%d %d %d\n", d - a, d - b, d - c);
    return 0;
}
