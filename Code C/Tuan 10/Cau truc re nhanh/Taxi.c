#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x == 1) printf("7000");
    else if (x <= 30) printf("%d", 7000 + (x - 1) * 5000);
    else printf("%d", 7000 + 5000 * 29 + (x - 30) * 3000);
    return 0;
}