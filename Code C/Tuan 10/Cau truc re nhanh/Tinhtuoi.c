#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x - z > y) printf("-1");
    else printf("%d", y + z - x);
    return 0;
}