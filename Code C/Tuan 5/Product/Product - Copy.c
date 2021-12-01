#include <stdio.h>

int main(){
    int n;
    double a[100];
    scanf("%d", &n);
    double tich = 1;
    for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
    for(int i = 0; i < n; i++) tich *= a[i];
    printf("%.2lf", tich);
    return 0;
}