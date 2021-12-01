#include <stdio.h>

void readArray(int a[], int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

void printfArray(int a[], int n){
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int search(int a[], int n, int x){
    for(int i = 0; i < n; i++) if(a[i] == x) return i;
    return 0;
}

void sortArray(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int doi = a[j];
                a[j] = a[i];
                a[i] = doi;
            }
        }
    }
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    int x;
    scanf("%d", &x);
    readArray(a, n);
    printfArray(a, n);
    printf("%d\n",search(a, n, x));
    sortArray(a, n);
    return 0;
}