#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b , &c);
    if(a == 0) printf("x = %.2f", (float) -c / b);
    else{
        float delta = b * b - 4 * a * c;
        if(delta < 0) printf("Vo nghiem");
        else if(delta == 0) printf("x = %.2f", (float) -b / (2 * a));
        else printf("x1 = %.2f\n x2 = %.2f", (float) (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a) );
    }
    return 0;
}