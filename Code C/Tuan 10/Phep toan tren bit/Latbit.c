#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    int a[32];
    for(int i = 0; i < 32; i++){
        if(pow(2, 31 - i) <= x) {
            a[i] = 1;
            x = x - pow(2, 31 - i);
        }
        else a[i] = 0;
    }
    long long int sum = 0;
    for(int i = 0; i < 32; i++){
        if(a[i] == 0) sum += pow(2, 31 - i);
    }
    printf("%lld", sum);
    return 0;
}