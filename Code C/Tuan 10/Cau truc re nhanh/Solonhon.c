#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", (int) fmax(x, y));
    return 0;
}