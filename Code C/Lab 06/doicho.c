#include <stdio.h>

void doicho(int *a, int *b, int * c){
    int doi1 = *a;
    int doi2 = *b;
    int doi3 = *c;
    *a = doi3;
    *b = doi1;
    *c = doi2;
}

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    doicho(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}