#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a > 0 && b > 0 && c > 0){
    if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) printf("true");
    else printf("false");
    }
    else printf("false");
    return 0;
}