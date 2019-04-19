#include <stdio.h>

/*
By induction:

Base case: n = 2, 5^2 = 25. ok

Suppose true for some p such that;
5^p = 100k + 25, whole number k
5^(p+1) = 5 * 5^p = 500k + 125 = 100(5k + 1) + 25. ok 
True for n + 1.

More generally, true for all natural numbers n >= 2.

*/

int main () {

    unsigned long long int n;
    scanf("%lld", &n);
    if (n > 1) {
        printf("25\n");
    }
    else {
        printf("2 <= n <= 2 * 10^18");
    }
    return 0;
}
