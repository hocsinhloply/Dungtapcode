#include <stdio.h>

void readArray(int a[], int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

void printfArray(int a[], int n){
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void chen(int a[], int n, int vt, int x){
    int doi = 0;
    for(int i = 0; i < n + 1; i++){
        if(i == vt){
            doi = a[i];
            a[i] = x;
        }
        if(i > vt){
            int laidoi = a[i];
            a[i] = doi;
            doi = laidoi;
        }
    }
    printfArray(a, n + 1);
}

int searchx(int a[], int n, int x){
    for(int i = 0; i < n + 1; i++) if(a[i] == x) return i;
}

void deletex(int a[], int n, int x){
    int dem = searchx(a, n, x);
    for(int i = 0; i < n; i++){
        if(i >= dem){
            a[i] = a[i + 1];
        }
    }
    printfArray(a, n);
}


int main(){
    int n;
    scanf("%d", &n);
    int x;
    scanf("%d", &x);
    int vt;
    scanf("%d", &vt);
    int a[100];
    readArray(a, n);
    chen(a, n, vt, x);
    printf("%d\n", searchx(a, n, x));
    deletex(a, n, x);
    return 0;
}