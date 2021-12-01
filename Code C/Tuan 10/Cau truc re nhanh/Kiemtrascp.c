#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int x = sqrt(n);
    if(n == x * x) printf("yes");
    else printf("no");
    return 0;
}