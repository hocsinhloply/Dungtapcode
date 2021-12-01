#include <stdio.h>

int main(){
    float a, b;
    scanf("%f%f", &a, &b);
    for(float i = a; i <= b; i++){
        printf("%.f %.2f %.2f\n", i, (i - 32) * 5 / 9, (i - 32) * 5 / 9 + 273.15);
    }
    return 0;
}