#include <stdio.h>

int main(){
    int n;
    double a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
    double min = a[0];
    double max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    printf("%.2lf %.2lf", max, min);
    return 0;
}