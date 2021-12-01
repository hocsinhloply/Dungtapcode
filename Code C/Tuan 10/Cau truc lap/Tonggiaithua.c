#include <stdio.h>

int giaithua(int i){
    if(i == 1) return 1;
    return giaithua(i - 1) * i;
}

int main(){
    int x;
    scanf("%d", &x);
    int sum = 0;
    for(int i = 1; i <= x; i++) sum += giaithua(i);
    printf("%d", sum);
}