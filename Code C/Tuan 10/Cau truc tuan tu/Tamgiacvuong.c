#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%.2f", (float) sqrt(x * x + y * y));
    return 0;
}