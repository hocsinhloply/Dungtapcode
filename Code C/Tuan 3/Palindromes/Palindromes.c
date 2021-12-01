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
    if(c == b) printf("%d is a palindrome!", c);
    else printf("%d is not a palindrome!", c);
    return 0;
}