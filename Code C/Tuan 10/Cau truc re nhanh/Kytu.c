#include <stdio.h>

int main(){
    char s;
    scanf("%c", &s);
    if(s >= 'a' && s <= 'z') printf("The upper case character corresponding to %c is %c", s, s - 32);
    else if(s >= 'A' && s <= 'Z') printf("The lower case character corresponding to %c is %c", s, s + 32);
    else printf("%c is not a letter", s);
    return 0;
}