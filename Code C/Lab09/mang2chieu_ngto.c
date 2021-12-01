#include <stdio.h>
#include <math.h>

int snt(int x){
    int dem = 0;
    if(x == 1) return 0;
    for(int i = 1; i < sqrt(x); i++){
        if(x % i == 0) dem ++; 
    }
    if(dem == 1) return 1;
    else return 0;
}

int sntmax(int a[][100], int n, int m){
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(snt(a[i][j]) == 1 && snt(a[i][j]) > max) {
                max = snt(a[i][j]);
            }
        }
    }
    return max;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(snt(a[i][j]) == 1) {
                dem ++;
                printf("%d ", a[i][j]);
            }
        }
    }
    if(dem == 0) printf("khong tim thay snt");
}