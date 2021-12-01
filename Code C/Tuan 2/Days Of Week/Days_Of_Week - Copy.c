#include <stdio.h>

int main(){
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
    int year0 = year - (14 - month) / 12;
    int x = year0 + year0 / 4 - year0 / 100 + year0 / 400;
    int month0 = month + 12 * ((14 - month) / 12) - 2;
    int day0 = (day + x + 31 * month0 / 12) % 7; 
    printf("%d", day0);
    return 0;
}
