#include <stdio.h>

int main(){
    double a[100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n + 1; i++) scanf("%lf", &a[i]);
    for(int i = 0; i < n + 1; i++){
        if(a[n] < a[i]){
            double doi = a[n];
            a[n] = a[i];
            a[i] = doi;
        }
    }
    for(int i = 0; i < n + 1; i++) printf("%.2lf ", a[i]);
    return 0;
}