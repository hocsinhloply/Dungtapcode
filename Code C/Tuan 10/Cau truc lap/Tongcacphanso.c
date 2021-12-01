#include <stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    float sum = 0;
    for(float i = 1; i <= x; i++) sum += (i / (i + 1));
    printf("%.5f", sum);
    return 0;
}