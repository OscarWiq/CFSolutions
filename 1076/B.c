#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main () {

    uint64_t n;
    scanf("%"SCNu64, &n);

    if (n % 2 == 0) {
        printf("%"PRIu64"\n", n / 2);
    }
    else {
        for (uint64_t j = 3 ; j * j <= n; j += 2) {
            if (n % j == 0) {
                printf("%"PRIu64"\n", (((n - j) / 2)) + 1);
                n = 1;
                break;
            }
        }
        if (n > 1) {
            printf("1\n");
        }
    }
    return 0;
}
