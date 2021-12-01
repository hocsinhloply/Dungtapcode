#include <stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if(y == 0 && x != 0) printf("no");
    else{
    if(x % y == 0) printf("yes");
    else printf("no");
    }
    return 0;
}