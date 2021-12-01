#include <stdio.h>

int main(){
    int n;
    float a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    for(int i = n - 1; i >= 0; i--) printf("%.2f ", a[i]);
    return 0;
}