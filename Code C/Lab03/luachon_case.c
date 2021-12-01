#include <stdio.h>

int main(){
    int a, b;
    char sign;
    scanf("%d %d %c", &a, &b, &sign);
    switch (sign)
    {
    case '1':
        printf("Tong: %d", a + b);
        break;
    
    case '2':
        printf("Hieu: %d", a - b);
        break;
    
    case '3':
        printf("Tich: %d", a * b);
        break;

    case '4':
        printf("Thuong: %.2f", (float) a / b);
        break;  
    default:
         break;
    }
}