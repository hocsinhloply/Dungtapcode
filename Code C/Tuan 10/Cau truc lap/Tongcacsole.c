#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int sum = 0;
    for(int i = 1; i <= 2 * x + 1; i += 2) sum += i;
    printf("%d", sum);
    return 0;
}