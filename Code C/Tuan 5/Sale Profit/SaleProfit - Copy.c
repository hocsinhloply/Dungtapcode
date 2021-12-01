#include <stdio.h>

int main(){
    int n;
    float a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    float min = a[0];
    float max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    printf("%.2f %.2f", max, min);
    return 0;
}