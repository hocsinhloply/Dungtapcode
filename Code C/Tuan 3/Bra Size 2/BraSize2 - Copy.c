#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    if (10 <= a && a <= 11) printf("AA");
    else if(12 <= a && a <= 13) printf("A");
    else if(14 <= a && a <= 15) printf("B");
    else if(16 <= a && a <= 17) printf("C");
    else if(18 <= a && a <= 19) printf("D");
    else if(20 <= a && a <= 21) printf("E");
    else if(22 <= a && a <= 23) printf("F");
    else if(24 <= a && a <= 25) printf("G");
    else if(26 <= a && a <= 27) printf("H");
    else printf("Sorry, we don't have your size!");
    return 0;  
}