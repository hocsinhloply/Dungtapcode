#include <stdio.h>

void namnhuan(int a){
    if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) 
        printf("%d ", a);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b );
    for(; a <= b; a++) {
        namnhuan(a);
    }
    return 0;
}