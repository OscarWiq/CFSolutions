#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char s[101];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i') {
            continue;
        }
        else {
            printf(".%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
