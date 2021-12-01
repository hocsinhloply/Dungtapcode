#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x + y > z && x - y < z && x > 0 && y > 0 && z > 0){
        float a = (float) (x + y + z) / 2;
        float s = sqrt(a * (a - x) * (a - y) * (a - z));
        printf("%.2f", s);
    }
    else printf("invalid");
    return 0;
}