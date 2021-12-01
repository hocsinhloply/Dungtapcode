#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2 * n + 1; i ++){
        for(int j = 1; j <= 2 * n + 1; j++){
            if(j == i || j == (2 * n + 1) - (i - 1)) printf("* ");
            else printf(". ");
            // if(j == 2 * n + 1) printf("\n");
        }
        printf("\n");
    }
    return 0;
}