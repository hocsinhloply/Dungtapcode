#include <stdio.h>

int main(){
    float a[100][100], b[100][100], c[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) scanf("%f", &a[i][j]);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) scanf("%f", &b[i][j]);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) c[i][j] = a[i][j] + b[i][j];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) printf("%.2f ", c[i][j]);
        printf("\n");
    }
    return 0;
}