#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[100];
    for(int i = 0; i < n; i++) scanf("%f", &a[i]);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]){
                float doi = a[i];
                a[i] = a[j];
                a[j] = doi;
            }
        }
    }
    for(int i = 0; i < n; i++) printf("%.2f ", a[i]);
    return 0;
}