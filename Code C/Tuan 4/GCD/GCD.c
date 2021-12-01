#include <stdio.h>
#include <math.h>

int abs(int x){
    if(x < 0) x = -x;
    else x = x;
    return x;
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int UCLN = 0;
    for(int i = 1; i <= fmin(abs(m), abs(n)); i++){
        if(abs(m) % i == 0 && abs(n) % i == 0) UCLN = i;
    }
    printf("%d", UCLN);
    return 0;
}