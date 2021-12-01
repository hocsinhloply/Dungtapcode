#include <stdio.h>
#include <math.h>

int main(){
    float n;
    scanf("%f", &n);
    if(n >= 1){
    printf("%.1f ", n);
    printf("%.1f ", log(n) / log(2));
    printf("%.1f ", pow(n, 2));
    printf("%.1f ", pow(n, 3));
    printf("%.1f ", 2 * n);
    }
    else printf("invalid");
    return 0;
}