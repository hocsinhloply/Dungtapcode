#include <stdio.h>

int couple(int a[], int j, int n){
    if(a[j] == a[n] && j != n) return 1;
    for(int i = 0; i < n; i++){ 
        if((a[i] == a[j] && i != j) || (a[i + n + 1] == a[j] && j != i + n + 1)) return 1;
    }
    return 0;
}

int main(){
    int x;
    scanf("%d", &x);
    int n = (x - 1) / 2;
    int a[100000];
    for(int i = 0; i < x; i++) scanf("%d", &a[i]);
    for(int i = 0; i < x; i++){
        if(couple(a, i, n) == 0) {
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}