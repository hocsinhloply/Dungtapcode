#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c) printf("true");
    else printf("false");
    return 0;
}