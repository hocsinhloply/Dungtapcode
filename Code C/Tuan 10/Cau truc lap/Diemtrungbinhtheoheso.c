#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++) scanf("%f", &a[i][j]);
    }
    float dtb = 0;
    float heso = 0;
    for(int i = 0; i < n; i++){
        heso += a[i][1];
        dtb += a[i][0] * a[i][1];
    }
    dtb = dtb / heso;
    printf("%.2f", dtb);
    return 0;
}