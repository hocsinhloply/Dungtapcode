#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n > 0) printf("%.0f",ceil((float) n / 2.718));
    else printf("invalid");
    return 0;
}