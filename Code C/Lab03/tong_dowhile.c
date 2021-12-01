#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    int tong = 0;
    do
    {
        scanf("%d", &n);
        tong += n;
    } while(n != 0);
    printf("%d", tong);
}