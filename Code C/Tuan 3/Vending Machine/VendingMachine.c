#include <stdio.h>

int main(){
    char nut;
    int a;
    scanf("%d %c", &a, &nut);
    switch (nut)
    {
    case 'C':
        if(a >= 12000) printf("Cocacola %d", a - 12000);
        else printf("Con thieu %d de mua Cocacola", 12000 - a);
        break;

    case 'P':
        if(a >= 12000) printf("Pepsi %d", a - 12000);
        else printf("Con thieu %d de mua Pepsi", 12000 - a);
        break;

    case '7':
        if(a >= 11000) printf("7up %d", a - 11000);
        else printf("Con thieu %d de mua 7up", 11000 - a);
        break;

    case 'S':
        if(a >= 10000) printf("Sprite %d", a - 10000);
        else printf("Con thieu %d de mua Sprite", 10000 - a);
        break;

    case 'F':
        if(a >= 7000) printf("Fanta %d", a - 7000);
        else printf("Con thieu %d de mua Fanta", 7000 - a);
        break;
        
    case 'L':
        if(a >= 5000) printf("Lavie %d", a - 5000);
        else printf("Con thieu %d de mua Lavie", 5000 - a);
        break;
    default:
        printf("%d", a);
        break;
    }

} 