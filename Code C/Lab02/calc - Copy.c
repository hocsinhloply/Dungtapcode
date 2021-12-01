#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Tong 2 so la %d\n", a + b);
    printf("Hieu 2 so la %d\n", a - b);
    printf("Tich 2 so la %d\n", a * b);
    printf("Thuong 2 so la %f\n", (float) a / b);
    printf("Tong binh phuong 2 so la %d", a*a + b*b);
    return 0;    
}