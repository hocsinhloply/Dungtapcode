#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a >= 0) printf("%.2f", a);
    else printf("%.2f", - a);
    return 0;
}