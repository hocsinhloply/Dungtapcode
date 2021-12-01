#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[100];
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    if(n % 2 == 0) printf("%.2f", (a[n/2] + a[n/2 - 1])/2);
    else printf("%.2f", a[(n-1)/2]);
    return 0;
}