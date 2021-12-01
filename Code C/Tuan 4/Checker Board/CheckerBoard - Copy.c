#include <stdio.h>
void board(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2 == 0 && j == 1) printf(" * ");
            else printf("* ");
            if(j == n) printf("\n");
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    board(n);
    return 0;
}