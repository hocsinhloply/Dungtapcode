#include <stdio.h>

int main(){
    int n;
    float a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    float dtb = 0;
    for(int i = 0; i < n; i++) dtb += a[i] / n;
    printf("%.2f", dtb);
    return 0;
}