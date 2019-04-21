#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

typedef uint64_t u64;

u64 getPrime(u64 n);

int main () {
    
    int count = 0;
    u64 n;
    scanf("%"SCNu64, &n);

    if (n % 2 != 0) {
        n -= getPrime(n);
        count++;
    }
    printf("%"PRIu64"\n", count + (n / 2));
    return 0;
}

u64 getPrime(u64 n) {
    for (u64 i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

