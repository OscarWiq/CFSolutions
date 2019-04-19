#include <stdio.h>
#include <stdlib.h>

int main () {
    //trick to convert char to int
    int n = getchar() - '0';
    int current;
    //2n + 1 rows
    for (int i = -n; i <= n; i++) {
        //n + 1 -> n + 2 -> ... -> 2n + 1 -> ... -> n + 1 columns
        for (int j = -n; j <= n - abs(i); j++) {
	    current = n - abs(i) - abs(j);
	    if (current < 0) {
                printf("  ");
            }
	    else {
                printf("%d%c", current, j < n - abs(i) ? ' ' : '\n');
            }
	}
    }
    return 0;
}

