#include <stdio.h>

int closenumber(int x){
    int sum = 0;
    for(int i = 1; i < x; i++){
        if(x % i == 0) sum += i;
    }
    return sum;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a == closenumber(b) && b == closenumber(a)) printf("true");
    else printf("false");
    return 0;
}