#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

typedef int64_t I64;

int main () {
    
    I64 n;
    scanf("%"SCNi64, &n);

    char a[n];
    scanf("%s", a);

    I64 b[10];
    I64 ch;
    for (ch = 1; ch < 10; ch++) {
        scanf("%"SCNi64, &b[ch]);    
    }
    
    I64 i;
    for (i = 0; i < n; i++) {
        ch = a[i] - '0';
        if (ch < b[ch]) {
            break;
        }
    }

    for ( ; i < n; i++) {
        ch = a[i] - '0';
        if (ch > b[ch]) {
            break;
        }
        a[i] = b[ch] + '0';
    }
    
    printf("%s\n", a);
    return 0;
}
