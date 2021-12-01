#include <stdio.h>

int main(){
    int day, month;
    scanf("%d%d", &day, &month);
    if (month == 4 || month == 5) printf("Spring");
    if (month == 7 || month == 8) printf("Summer");
    if (month == 10 || month == 11) printf("Autumn");
    if (month == 1 || month == 2) printf("Winter");
    if ((month == 3 && day <= 20) || (month == 12 && day >= 22) ) printf("Winter");
    if ((month == 3 && day > 20) || (month == 6 && day < 22) ) printf("Spring");
    if ((month == 6 && day >= 22) || (month == 9 && day <= 22) ) printf("Summer");
    if ((month == 9 && day >= 23) || (month == 12 && day < 22) ) printf("Autumn");
    return 0;;
}