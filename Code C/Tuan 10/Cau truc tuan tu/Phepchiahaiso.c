#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(y == 0) printf("error");
    else printf("%.2f", (float) x / y);
    return 0;
}