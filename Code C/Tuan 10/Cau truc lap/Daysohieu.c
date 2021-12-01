#include <stdio.h>

int hieu(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return 3 * hieu(n - 1) - hieu(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", hieu(n));
    return 0;
}