#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[100];
    float b[100];
    float tich = 0;
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    for(int i = 0; i < n; i++) scanf("%f", &b[i]);
    for(int i = 0; i < n; i++) tich += a[i] * b[i];
    printf("%.2f", tich);
    return 0;
}