#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a < 74) printf("0");
    if(a >= 74 && a <= 95) printf("1");
    if(a >= 96 && a <= 110) printf("2");
    if(a >= 111 && a <= 130) printf("3");
    if(a >= 131 && a <= 155) printf("4");
    if(a > 155) printf("5");
    return 0;
}