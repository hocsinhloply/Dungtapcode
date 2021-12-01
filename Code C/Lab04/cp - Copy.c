#include <stdio.h>
#include <math.h>

unsigned int chinhphuong(unsigned int x){
    int cp = sqrt(x);
    if(cp * cp == x) return 1;
    else return 0;
}

int main(){
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    for(; a <= b; a++){
        if(chinhphuong(a) == 1) printf("%u " , a);
    }
    return 0;
}