#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a % 7 == 0 && b % 7 == 0) printf("true");
    else printf("false");
    return 0;
}