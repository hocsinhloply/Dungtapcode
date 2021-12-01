#include <stdio.h>

int main(){
    int n;
    double sum = 0;
    double a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
    for(int i = 0; i < n; i++) sum += a[i];
    double avg = sum / n;
    double var = 0;
    for(int i = 0; i < n; i++){
        var += (a[i] - avg) * (a[i] - avg) / n;
    }
    printf("%.2lf", var);
    return 0;
}