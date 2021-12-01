#include <stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if(y <= 12) printf("%d", (y - x) * 6000);
    else if(x <= 12 && y >= 12) printf("%d", (12 - x) * 6000 + (y - 12) * 7500);
    else printf("%d", 7500 * (y - x));
    return 0;
}