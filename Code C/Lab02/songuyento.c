#include <stdio.h>
#include <math.h>

int main(){
    int a, dem = 0;
    scanf("%d", &a);
    for(int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) dem = dem + 1;
    }
    if (dem == 0) printf("So %d la so nguyen to", a);
    else printf("So %d khong la so nguyen to", a);
    return 0;
}