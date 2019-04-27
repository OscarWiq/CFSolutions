#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef int64_t I64;

int main () {
    
    I64 a[20];
    I64 x, count = 0;
    scanf("%"SCNi64, &x);
    
    I64 t = 0;
    for (I64 i = 20; i > 0; i--) {
        if (!(x & 1 << (i - 1))) {
            x ^= (1 << i) - 1;
            a[count++] = i;
            t++;

            if (x == (1 << 20) - 1) {
                break;
            }
            x++;
            t++;
        }
    }
    printf("%"PRIi64"\n", t);

    for (I64 j = 0; j < count; j++) {
            printf("%"PRIi64" ", a[j]);
    }
    return 0;
}

