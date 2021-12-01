#include <stdio.h>

int main(){
    unsigned int n;
    int tong = 0;
    scanf("%u", &n);
    while(n - 1 > 0){
        if((n -1) % 2 == 0) tong += (n - 1);
        n--;
    }
    printf("%d", tong);
}