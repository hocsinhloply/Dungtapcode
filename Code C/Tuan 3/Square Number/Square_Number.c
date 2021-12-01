#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d", &a);
    int x = sqrt(a);
    if(a == x * x) printf("true");
    else printf("false");
    return 0;
}