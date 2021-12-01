#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    if (63 <= a && a <= 67) printf("30");
    else if(68 <= a && a <= 72) printf("32");
    else if(73 <= a && a <= 77) printf("34");
    else if(78 <= a && a <= 82) printf("36");
    else if(83 <= a && a <= 87) printf("38");
    else if(88 <= a && a <= 92) printf("40");
    else if(93 <= a && a <= 97) printf("42");
    else if(98 <= a && a <= 102) printf("44");
    else if(103 <= a && a <= 107) printf("46");
    else printf("Sorry, we don't have your size!");
    return 0;  
}