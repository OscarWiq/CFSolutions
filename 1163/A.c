#include <stdio.h>

int main () {

    int n, m;
    scanf("%d%d", &n, &m);

    printf("%d\n", m == 0 ? 1 : m * 2 <= n ? m : n - m);
    return 0;
}
