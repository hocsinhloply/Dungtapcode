#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n > 0 && n < 100) for(int i = 1; i <= n; i++) printf("Hello, world\n");
    else printf("invalid");
    return 0;
}