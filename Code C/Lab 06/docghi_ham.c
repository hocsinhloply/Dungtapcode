#include <stdio.h>
#include <stdlib.h>

void readArray(int *a, int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

void printArray(int *a, int n){
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    for(int i = n - 1; i >= 0; i--) printf("%d ", a[i]);
}

int main(){
    int *a;
    a = (int*) malloc(sizeof(int));
    int n;
    scanf("%d", &n);
    readArray(&a, n);
    printArray(&a, n);
    free(a);
    return 0;
}