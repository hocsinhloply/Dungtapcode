#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int x = (a + b) / 2;
    float y = (float) (a + b) / 2;
    if(x == y) printf("%d", x);
    else printf("%.1f", y);
    return 0;
}