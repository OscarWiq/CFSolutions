#include <stdio.h>
#include <stdlib.h>

 int main () {
    int n, m, i, j, a[6][6];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i][j] == 1){
                n = i + 1;
                m = j + 1;
            }
        }
    }
    printf("%d\n", abs(3 - n) + abs(3 - m));
    return 0;
}
