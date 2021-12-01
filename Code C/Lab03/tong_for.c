#include <stdio.h>

int main(){
    unsigned int n;
    int tong = 0;
    scanf("%u", &n);
    for(int i = 1; i < n; i++){
        if(i % 2 == 0) tong += i;
    }
    printf("%d", tong);
    return 0;
}