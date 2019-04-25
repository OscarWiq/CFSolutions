#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

typedef int32_t I32;
typedef int64_t I64;


I64 greatestCommonDivisor(I64 a, I64 b);

int main () {
    
    I64 a, b;
    scanf("%"SCNi64, &a);
    scanf("%"SCNi64, &b);

    if (a == b) {
        printf("0\n");
        return 0;
    }

    if (a > b) {
        I64 t = b;
        b = a;
        a = t;
    }

    I64 kMin = 0, diff = b - a;
    I64 min = (a / greatestCommonDivisor(a, b) * b);
    
    for (I64 i = 1; i * i <= diff; ++i) {
        if (diff % i != 0) {
            continue;
        }

        I64 n = i;
        if (a % n != 0) {
            I64 k = n - a % n;
            I64 m = ((a + k) / greatestCommonDivisor(a + k, b + k) * (b + k));
            if ((m == min && k < kMin) || m < min) {
                min = m;
                kMin = k;
            }
        }
        
        n = diff / i;
        if (a % n != 0) {
            I64 k = n - a % n;
            I64 m = ((a + k) / greatestCommonDivisor(a + k, b + k) * (b + k));
            if ((m == min && k < kMin) || m < min) {
                min = m;
                kMin = k;
            }
        }
    }

    printf("%"PRIi64"\n", kMin);
    return 0;
}

I64 greatestCommonDivisor(I64 a, I64 b) {
    I64 res = a % b;
    while (res > 0) {
        a = b;
        b = res;
        res = a % b;
    }
    return b;
}

