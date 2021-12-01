#include <stdio.h>
#include <math.h>

int armstrong(unsigned int x){
    unsigned int c = x % 10;
    unsigned int b = ((x - c) / 10) % 10;
    unsigned int a = (x - b * 10 - c) / 100;
    if(x == pow(a, 3) + pow(b, 3) + pow(c, 3)) return 1;
    else return 0;
}

int main(){
    int dem = 0;
    for(int i = 100; i <= 999; i++){
        if(armstrong(i) == 1){
            dem += 1;
            printf("%u ", i);
        }
    }
    printf("%d", dem);
    return 0;
}