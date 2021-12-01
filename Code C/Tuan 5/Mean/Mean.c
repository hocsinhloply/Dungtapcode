#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float sum = 0;
    float a[100];
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    for(int i = 0; i < n; i++) sum += a[i] / n;
    printf("%.2f", sum);
    return 0;
}