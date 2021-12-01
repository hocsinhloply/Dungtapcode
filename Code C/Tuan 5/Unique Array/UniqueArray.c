#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int doi = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] != doi) {
            printf("%d ", doi);
            doi = a[i];
        }
    }
    return 0;
}