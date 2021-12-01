#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int LCM = 0;
    int i = fmax(a, b);
    while(i != 0){
        if(i % a == 0 && i % b == 0) {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}