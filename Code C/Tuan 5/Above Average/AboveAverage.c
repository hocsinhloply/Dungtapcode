#include <stdio.h>

int main(){
    int n;
    double sum = 0;
    double a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
    for(int i = 0; i < n; i++) sum += a[i];
    double avg = sum / n;
    for(int i = 0; i < n; i++){
        if(a[i] >= avg) printf("%.2lf ", a[i]);
    }
    return 0;
}