#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 2; i <= n; i++) sum += (i % 2 != 0) ? 0 : i ;
    printf("%d", sum);
    return 0;
}