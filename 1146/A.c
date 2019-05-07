#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main () {

    char *s = (char *) calloc (50 + 1, sizeof(char));
    scanf("%s", s);

    int n = strlen(s);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            count++;
        }
    }
    printf("%d\n", MIN(n, 2 * count - 1));
    return 0;
}
