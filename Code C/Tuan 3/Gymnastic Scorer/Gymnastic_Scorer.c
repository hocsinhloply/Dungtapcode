#include <stdio.h>

int main(){
    float a[100];
    for(int i = 0; i < 6; i++) scanf("%f", &a[i]);
    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            if(a[i] > a[j]){
                float doi = a[i];
                a[i] = a[j];
                a[j] = doi;
            }
        }
    }
    printf("%.1f", (a[1] + a[2] + a[3] + a[4]) / 4);
    return 0;
}