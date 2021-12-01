#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    int dem = 0;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = n - 1; i >= 0 ; i--){
        if(a[i] == 7){
            dem += 1;
            printf("%d ", i);    
        }
    }
    if(dem == 0) printf("Not found");
    return 0;
}