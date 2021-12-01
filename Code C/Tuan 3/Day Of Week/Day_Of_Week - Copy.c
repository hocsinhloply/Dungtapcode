#include <stdio.h>

int main(){
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
    int year0 = year - (14 - month) / 12;
    int x = year0 + year0 / 4 - year0 / 100 + year0 / 400;
    int month0 = month + 12 * ((14 - month) / 12) - 2;
    int day0 = (day + x + 31 * month0 / 12) % 7; 
    if (day0 == 0) printf("Sunday");
    if (day0 == 1) printf("Monday");
    if (day0 == 2) printf("Tuesday");
    if (day0 == 3) printf("Thursday");
    if (day0 == 4) printf("Wednesday");
    if (day0 == 5) printf("Friday");
    if (day0 == 6) printf("Saturday");
    return 0;
}
// Viết lại chương trình DayOfWeek đã làm ở tuần 2, nhưng thay vì in ra số, in ra màn hình ngày trong tuần tương ứng

// 0 - "Sunday", 1 - "Monday", 2- "Tuesday", ..., 6 - "Saturday"