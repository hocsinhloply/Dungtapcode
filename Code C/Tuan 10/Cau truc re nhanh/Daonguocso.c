#include <stdio.h>

int doi(int x){
    int c = x % 10;
    x = x / 10;
    int b = x % 10;
    x = x / 10;
    int a = x;
    return c * 100 + b * 10 + a;
}

int main(){
    int y;
    scanf("%d", &y);
    int x = y;
    int c = x % 10;
    x = x / 10;
    int b = x % 10;
    x = x / 10;
    int a = x;
    if(c >= a) printf("invalid");
    else {
        int z = y - doi(y);
        printf("%d", z + doi(z));
    }
    return 0;
}