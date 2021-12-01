#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int giaithua = 1;
    for(int i = 2; i <= n; i++) giaithua *= i;
    printf("%d", giaithua);
    return 0;
}