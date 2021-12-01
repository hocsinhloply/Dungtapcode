#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x + y > z && x - y < z && x > 0 && y > 0 && z > 0){
        if(x == y && x == z) printf("tam giac deu");
        else if(x == y || x == z || y == z) printf("tam giac can");
        else if(pow(x, 2) == pow(y, 2) + pow(z, 2) || pow(y, 2) == pow(x, 2) + pow(z, 2) || pow(z, 2) == pow(y, 2) + pow(x, 2)) printf("tam giac vuong");
        else printf("tam giac thuong");
    }
    else printf("khong phai tam giac");
    return 0;
}