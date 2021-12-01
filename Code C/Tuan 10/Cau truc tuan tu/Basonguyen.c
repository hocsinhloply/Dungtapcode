#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d\n%.2f\n%d", x + y + z, (float) (x + y + z) / 3, x * y * z);
    return 0;
}