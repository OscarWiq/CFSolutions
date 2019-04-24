#include <stdio.h>

int main () {
    
    long long n, m, i, odd = 0, even = 0, count = 0;
    scanf("%lld %lld", &n, &m);
    long long a[n];
    long long b[m];

    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        if (a[i] % 2 == 1)
            odd++;
    }
    for (i = 0; i < m; i++) {
        scanf("%lld", &b[i]);
        if (b[i] % 2 == 0)
            even++;
    }


    if (odd < even) {
        count += odd;
    }
    else {
        count += even;
    }

    if (n - odd < m - even) {
        count += n - odd;
    }
    else {
        count += m - even;
    }
    printf("%lld\n", count);
    return 0;
}
