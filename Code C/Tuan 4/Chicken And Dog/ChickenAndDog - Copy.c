#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int dog = (b - 2 * a) / 2;
    int chicken = (4 * a - b) / 2;
    if(dog + chicken == a) printf("chicken = %d, dog = %d", chicken, dog);
    else printf("invalid");
    return 0;
}