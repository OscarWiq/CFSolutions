#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

typedef int64_t I64;

I64 reachNumber(I64 n);

int main () {
    
    I64 n, count = 0;
    scanf("%"SCNi64, &n);
    
    if (n >= 1 && n <= 9) {
        printf("9\n");
        return 0;
    }

    while (n > 1) {
        n = reachNumber(n);
        count++;
    }

    printf("%"PRIi64"\n", count + 1); 
    return 0;
}

I64 reachNumber(I64 n) {
    I64 res = n + 1;
    while (res % 10 == 0) {
        res /= 10;
    }
    return res;
}
