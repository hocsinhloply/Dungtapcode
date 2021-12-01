#include <stdio.h>
#include <stdlib.h>

void nhap(int *a, int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

int countEven(int *a, int n){
    int dem = 0;
    for(int i = 0; i < n; i++) if(a[i] % 2 == 0) dem++;
    return dem;
}

int tongEven(int *a, int n){
    int sum = 0;
    for(int i = 0; i < n; i++) if(a[i] % 2 == 0) sum += a[i];
    return sum;
}

void inchan(int *a, int n){
    for(int i = 0; i < n; i++) if(a[i] % 2 == 0) printf("%d ", a[i]);
}

int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    nhap(a, n);
    inchan(a, n);
}