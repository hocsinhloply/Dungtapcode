#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x > y && y > z) printf("true");
    else if (x < y && y < z) printf("true");
    else printf("false");
    return 0;
}