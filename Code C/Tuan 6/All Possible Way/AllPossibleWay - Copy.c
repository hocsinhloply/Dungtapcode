#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }
    int k;
    int di = 0;
    int ve = 0;
    scanf("%d", &k);
    for(int i = 0; i < n; i++){
        if(i == k - 1){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 1){
                    di += 1;
                    if(i == j) ve += 1;
                }
            }
        }
        else{
            for(int j = 0; j < n; j++){
                if(a[i][j] == 1 && j == k - 1) ve += 1;
            }
        }
    }
    printf("%d %d", di , ve);
    return 0;
}