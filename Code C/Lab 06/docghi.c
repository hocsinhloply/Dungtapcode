#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a = (int*) malloc(sizeof(int));
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    for(int i = n - 1; i >= 0; i--) printf("%d ", a[i]);
    free(a);
    return 0;
}