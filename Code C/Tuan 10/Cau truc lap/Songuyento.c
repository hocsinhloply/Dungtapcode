#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    int dem = 0;
    for(int i = 1; i < sqrt(x); i++){
        if(x % i == 0) dem += 1;
    }
    if(dem == 1 && x != 1) printf("yes");
    else printf("no");
    return 0;
}