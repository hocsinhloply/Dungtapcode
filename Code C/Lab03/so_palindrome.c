#include <stdio.h>

int main(){
    int a;
    int b = 0;
    scanf("%d", &a);
    int c = a;
    for(int i = 1; i <= 5; i++){
        b = b * 10 + (a % 10);
        a = a / 10;
    }
    if(c == b) printf("So %d la so palindrome!", c);
    else printf("So %d khong phai la so  palindrome!", c);
    return 0;
}