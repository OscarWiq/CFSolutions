#include <stdio.h>
#include <stdlib.h>

#define ABS(a) ((a) > (0) ? (a) : -(a))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main () {
    int n;
    scanf("%d", &n);

    char *s = (char *) calloc(n + 1, sizeof(char));
    scanf("%s", s);

    int min = 4 * 26;
    char genome[] = "ACTG";
    for (int i = 0; i + 3 < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int diff = ABS(s[i + j] - genome[j]);
            sum += MIN(diff, 26 - diff);
        }
        min = MIN(min, sum);
    }
    printf("%d\n", min);
    return 0;
}
