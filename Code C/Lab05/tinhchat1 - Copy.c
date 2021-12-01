#include <stdio.h>
#include <math.h>

void readArray(int a[], int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

int primenum(int ai){
    int dem = 0;
    for(int i = 1; i < sqrt(ai); i++){
        if(ai % i == 0) dem += 1;
    }
    if(dem == 1) return 1;
    else return 0;
}

void printfprime(int a[], int n){
    for(int i = 1; i < n; i++){
        if(primenum(a[i]) == 1) printf("%d ", a[i]);
    }
    printf("\n");
}

void sortArray(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int doi = a[j];
                a[j] = a[i];
                a[i] = doi;
            }
        }
    }
    for(int i = 1; i < n; i++){
        if(primenum(a[i]) == 1) printf("%d ", a[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
}