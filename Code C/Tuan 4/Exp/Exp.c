#include <stdio.h>
#include <math.h>

long long giaithua(int x){
    long long giaithua = 1;
    for(int i = 1; i <= x; i++) giaithua *= i;
    return giaithua;
}

int main(){
    int x;
    scanf("%d", &x);
    double sum = 1 + x;
    double sumold = 1;
    int i = 2;
    while(sum - sumold > 0.001){
        sum = sum + pow(x, i) / giaithua(i);
        sumold = sumold + pow(x, i - 1) / giaithua(i - 1);
        i++;
    }
    printf("%.4lf", sum);
    return 0;
}
