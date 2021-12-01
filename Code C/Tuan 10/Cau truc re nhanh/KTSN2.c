#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    if(sqrt(x) * sqrt(x) == x && x % 3 == 0 && x % 5 == 1) printf("YES");
    else printf("NO");
    return 0;
}