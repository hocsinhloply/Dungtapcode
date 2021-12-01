#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x % 3 == 0 && x % 4 != 0 && (x % 5 == 2 || x % 5 == 3)) printf("YES");
    else printf("NO");
    return 0;
}