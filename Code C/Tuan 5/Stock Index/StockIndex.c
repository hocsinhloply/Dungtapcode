#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[100];
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    for(int i = 1; i < n; i++){
        if(a[i] > a[i - 1]) printf("%.2f ", a[i] - a[i - 1]);
        else printf("%.2f ", a[i - 1] - a[i]);
    }
    return 0;
}
// 5 -4.87 0.75 -0.37 -3.32 -4.94 
// 5.62 1.12 2.95 1.62 