#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int tich = 1;
    for(int i = 1; i <= 2 * n + 1; i += 2) tich *= i;
    printf("%lli", tich);
    return 0;
}