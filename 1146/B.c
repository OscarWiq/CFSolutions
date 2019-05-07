#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void noString(int check);

int main () {
    const int m = 100000;
    char *t = (char *) calloc(m + 1, sizeof(char));
    scanf("%s", t);
    const int n = strlen(t);

    char *a = (char *) calloc(m + 1, sizeof(char));
    int len = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'a') {
            continue;
        }
        a[len++] = t[i];
    }

    noString(len % 2 == 0);
    for (int i = 0; i < len / 2; i++) {
        noString(a[i] == a[(len / 2) + i]);
    }

    int j = (len / 2) - 1;
    int i = n - 1;
    for ( ; j >= 0; i--, j--) {
        noString(t[i] == a[j]);
    }

    t[i + 1]  = '\0';
    printf("%s\n", t);
    
    return 0;
}

void noString(int check) {
    if (!check) {
        printf(":(\n");
        exit (0);
    }
}
