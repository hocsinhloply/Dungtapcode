#include <stdio.h>

int main(){
    int day, month;
    scanf("%d%d", &day, &month);
    printf("%d", month);
    if((month == 3 && day >= 21) || (month == 4 && day <= 19)) printf("Bach Duong");
    if((month == 4 && day >= 20) || (month == 5 && day <= 20)) printf("Kim Nguu");
    if((month == 5 && day >= 21) || (month == 6 && day <= 21)) printf("Song Tu");
    if((month == 6 && day >= 22) || (month == 7 && day <= 22)) printf("Cu Giai");
    if((month == 7 && day >= 23) || (month == 8 && day <= 22)) printf("Su Tu");
    if((month == 8 && day >= 23) || (month == 9 && day <= 22)) printf("Xu Nu");
    if((month == 9 && day >= 23) || (month == 10 && day <= 23)) printf("Thien Binh");
    if((month == 10 && day >= 24) || (month == 11 && day <= 22)) printf("Thien Yet");
    if((month == 11 && day >= 23) || (month == 12 && day <= 21)) printf("Nhan Ma");
    if((month == 12 && day >= 22) || (month == 1 && day <= 19)) printf("Ma Ket");
    if((month == 1 && day >= 20) || (month == 2 && day <= 18)) printf("Bao Binh");
    if((month == 2 && day >= 19) || (month == 3 && day <= 20)) printf("Song Ngu");
    return 0;  
}
// "Bach Duong": 21/3 - 19/4
// "Kim Nguu": 20/4 - 20/5
// "Song Tu": 21/5 - 21/6
// "Cu Giai": 22/6 - 22/7
// "Su Tu": 23/7 - 22/8
// "Xu Nu": 23/8 - 22/9
// "Thien Binh": 23/9 - 23/10
// "Thien Yet": 24/10 - 22/11
// "Nhan Ma": 23/11 - 21/12
// "Ma Ket": 22/12 - 19/1
// "Bao Binh": 20/1 - 18/2
// "Song Ngu": 19/2 - 20/3