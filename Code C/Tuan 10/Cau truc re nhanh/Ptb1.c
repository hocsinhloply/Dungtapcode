#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0) printf("phuong trinh co vo so nghiem");
    else if(a == 0 && b != 0) printf("phuong trinh vo nghiem");
    else if(b == 0 && a != 0) printf("0.00");
    else printf("%.2f",(float) - b / a);
    return 0;
}