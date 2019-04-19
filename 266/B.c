#include <stdio.h>
#include <string.h>

char makeUpper(char ch);

int main () {

    int t, n;
    int count = 0;
    scanf("%d %d", &t, &n);

    char s[t + 1];
    scanf("%s", s);
    
    while (n--) { 
        for (int i = 0; i < strlen(s); i++) {
            if (makeUpper(s[i]) == 'B' && makeUpper(s[i + 1]) == 'G') {
                char ch = s[i];
                s[i] = s[i + 1];
                s[i + 1] = ch;
                i++;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}

char makeUpper(char ch) {
    if (ch >= 97 && ch <= 122) {
        return ch - 32;
    }
    else {
        return ch;
    }
}
