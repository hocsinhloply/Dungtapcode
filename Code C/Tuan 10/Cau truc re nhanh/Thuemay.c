#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(y <= 17) printf("%d", 2500 * z);
    else if(x <= 17 && y >= 17) printf("%d", 5500 * z);
    else printf("%d", z * 3000);
    return 0;
}