#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100][100];
    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++) scanf("%d", &a[i][j]);
    }
    for(int i = 0; i < n; i++){
        if(a[i][0] == 0 && a[i][1] > 30 && a[i][2] == 1) dem += 1;
    }
    printf("%d", dem);
    return 0;
}