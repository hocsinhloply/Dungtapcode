#include <stdio.h>

int main(){
    int n;
    float x;
    float a[100];
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++) scanf("%f", a[i]);
    for(int i = 0; i < n; i++){
        if(a[i] > x) printf("%.f %d\n", a[i], i);
    }
    return 0;
}