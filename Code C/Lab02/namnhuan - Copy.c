#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a % 4 == 0){
        if (a % 16 == 0 && a % 25 == 0) printf("La nam nhuan");
        else if (a % 25 == 0) printf("Khong la nam nhuan");
        else printf("La nam nhuan");
    }
    else printf("Khong la nam nhuan");
    return 0;
}