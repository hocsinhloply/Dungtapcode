#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a = 2 * n + 1;
    int b = n + 1;
    for(int i = 1; i <= a; i ++){
        for(int j = 1; j <= a; j++){
            if(i < b){
                if(j < (b - (i - 1)) || j > (b + (i - 1)))printf(". ");
                else if(j == (b - (i - 1)) || j == (b + (i - 1)) || j == b) printf("* ");
                else printf("  ");
            }
            else if(i == b){
                printf("* ");
            }
            else{
                if(j < i + 1 - b || j > a - (i - b)) printf(". ");
                else if(j == i + 1 - b || j == a - (i - b) || j == b) printf("* ");
                else printf("  ");
            }
            if(j == a) printf("\n");
        }
    }
    return 0;
}