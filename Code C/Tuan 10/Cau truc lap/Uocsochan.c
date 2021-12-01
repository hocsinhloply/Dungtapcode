#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int dem = 0;
    for(int i = 1; i <= x; i++) if(x % i == 0 && i % 2 == 0) dem++;
    printf("%d", dem);
    return 0;
}