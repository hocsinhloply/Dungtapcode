#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a == 3) printf("Killing Spree");
    else if(a == 4) printf("Dominating");
    else if(a == 5) printf("Mega Kill");
    else if(a == 6) printf("Unstoppable");
    else if(a == 7) printf("Wicked Sick");
    else if(a == 8) printf("Monster kill");
    else if(a == 9) printf("Godlike");
    else if(a >= 10) printf("Beyond Godlike");
    else printf("");
    return 0;
}
