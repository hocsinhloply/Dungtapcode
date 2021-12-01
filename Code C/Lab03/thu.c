#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Weekend");
        break;

    case 8:
        printf("Weekend");
        break;

    default:
        printf("invalid");
        break;
    }
}