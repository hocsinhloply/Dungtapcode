#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n > 0) for(int i = 1; i <= n; i++) (n % i == 0) ? printf("%d ", i) :printf("");
    else printf("");
    return 0;
}