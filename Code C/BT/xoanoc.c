#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int dem = 1;
    int x = 0;
    int a = 0;
    int b = 0;
    int y = n;
    while(dem < n * n){
        for(int j = b; j < y; j++){
            arr[a][j] = dem;
            dem++;
            if(j == y - 1){
                b = j;
                a++;
                break;
            }
        }
        for(int i = a; i < y; i++){
            arr[i][b] = dem;
            dem++;
            if(i == y - 1) {
                a = i;
                b--;
                break;
            }
        }
        for(int j = b ;j >= x; j--){
            arr[a][j] = dem;
            dem++;
            if(j == x) {
                b = j;
                a--;
                break;
            }
        }
        x++;
        y--;
        for(int i = a; i >= x; i--){
            arr[i][b] = dem;
            dem++;
            if(i == x){
                a = i;
                b ++;
                break;
            }
        }
        if(x == y - 1) arr[x][y - 1] = dem;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
}