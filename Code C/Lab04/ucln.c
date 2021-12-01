#include <stdio.h>

unsigned int ucln(unsigned int x, unsigned y){
    while(x != y){
    if(x == y) return x;
    if (x > y){
        x = x - y;
    }
    else y = y - x;
    }
}

int main(){
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%u", ucln(a, b));
    return 0;
}