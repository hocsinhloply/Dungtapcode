#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x1 = 1;
    for(int i = 0; i <= n; i++){
        if(i == 0) printf("%d\n", 1);
        else{
            x1 = x1 * i;
            int x2 = 1;
            for(int j = 0; j <= i; j++){
                if(j == 0) printf("%d ", 1);
                if(j == i) printf("%d\n", 1);
                if(j >= 1 && j < i){
                    int x3 = 1;
                    int a = i - j;
                    x2 = x2 * j;
                    while(a > 0){
                        x3 = x3 * a;
                        a --;
                    }
                    printf("%d ", x1 / (x2 * x3));
                }
            }
        }
    }
}