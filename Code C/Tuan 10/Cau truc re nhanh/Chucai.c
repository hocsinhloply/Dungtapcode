#include <stdio.h>

int main(){
    char s;
    scanf("%c", &s);
    if((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z')) printf("YES");
    else printf("NO");
    return 0;
}