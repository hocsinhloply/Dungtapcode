#include <stdio.h>

int main(){
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    c = a;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a = b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    b = c;
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}