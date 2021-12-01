#include <stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i < n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}