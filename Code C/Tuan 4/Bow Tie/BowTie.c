#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= (2 * n + 1); i++){
        for(int j = 1; j <= (2 * n + 1); j++){
            if(i <= n + 1){
                if(j <= i || j > (2 * n + 1 - i)) printf("* ");
                else printf(". ");
                if(j == (2 * n + 1)) printf("\n");
            }
            else{
                if(j < (n + 1) - (i - n - 2)  || j > (n + 1) + (i - n - 2) ) printf("* ");
                else printf(". ");
                if(j == (2 * n + 1)) printf("\n");
            }
        }
    }
    return 0;
}