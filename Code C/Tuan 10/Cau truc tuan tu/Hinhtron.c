#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n%f\n%f", 2 * x, (float) 2 * 3.14 * x, (float) 3.14 * x * x);
    return 0;
}