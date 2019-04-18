#include <stdio.h>
#include <string.h>

char makeLower(char ch);

int main () {
    
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    int k = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (makeLower(a[i]) < makeLower(b[i])) {
            k = -1;
            break;
        }
        else if (makeLower(b[i]) < makeLower(a[i])) {
            k = 1;
            break;
        }
    }
    printf("%d\n", k);
    return 0;
}

char makeLower(char ch) {
    if (ch >= 65 && ch <= 90) {
        return ch + 32;
    }
    else {
        return ch;
    }
}
