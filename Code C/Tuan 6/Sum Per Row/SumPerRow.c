#include <stdio.h>

int main(){
    float a[100][100];
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) scanf("%f", &a[i][j]);
    }
    int k; 
    scanf("%d", &k);
    float sum = 0;
    for(int i = 0; i < m; i++) sum += a[k - 1][i];
    printf("%.2f", sum);
    return 0;
}