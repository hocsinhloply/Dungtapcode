#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int dem = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0 && i != 1) dem ++;
    }
    if(dem == 0 && n > 0) printf("%d is a prime number", n);
    else printf("%d is not a prime number", n);
    return 0;
}