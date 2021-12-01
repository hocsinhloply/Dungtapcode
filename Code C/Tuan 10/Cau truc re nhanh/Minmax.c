#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d %d",(int) fmin(x, fmin(y, z)),(int) fmax(x, fmax(y, z)));
    return 0;
}