#include <stdio.h>
#include <math.h>

double Power(double x, unsigned int n){
    return pow(x, n);
}

int main(){
    double a, c;
    unsigned b, d;
    scanf("%lf %d %lf %d", &a, &b, &c, &d);
    printf("%.2lf", 2*Power(a, b) + 5 * Power(c, d) - 10);
    return 0;
}