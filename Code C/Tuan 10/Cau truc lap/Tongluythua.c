#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    int sum;
    for(int i = 1; i <= x; i++) sum += pow(i, i);
    printf("%d", sum);
    return 0;
}