#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, x3, x4 ,x5;
    scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);    
    float avg = (float) (x1 + x2 + x3 + x4 + x5) / 5;
    if (x1 > avg) x1 = x1 - avg;
    else x1 = avg - x1;
    if (x2 > avg) x2 = x2 - avg;
    else x2 = avg - x2;
    if (x3 > avg) x3 = x3 - avg;
    else x3 = avg - x3;
    if (x4 > avg) x4 = x4 - avg;
    else x4 = avg - x4;
    if (x5 > avg) x5 = x5 - avg;
    else x5 = avg - x5;
    float hieu1 = fmin(x1 , x2 );
    float hieu2 = fmin(x4 , x5 );
    float hieu3 = fmin(hieu1, hieu2);
    float hieu4 = fmin(hieu3, x3 );
    printf("%.0f", hieu4 + avg);
    return 0;
}