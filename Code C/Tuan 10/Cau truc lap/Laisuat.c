#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.f", (float) x * pow(1.007, y));
    return 0;
}