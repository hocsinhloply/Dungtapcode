#include <stdio.h>

int tong(int x){
    if(x == 1) return 1;
    return tong(x - 1) + x;
}

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++) sum += tong(i);
    printf("%d", sum);
    return 0;
}