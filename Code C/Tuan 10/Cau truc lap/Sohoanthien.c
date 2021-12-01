#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int sum = 0;
    for(int i = 1; i < x; i++){
        if(x % i == 0) sum += i;
    }
    if(sum == x) printf("yes");
    else printf("no");
    return 0;
}