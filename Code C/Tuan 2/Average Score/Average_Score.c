#include <stdio.h>

int main(){
    float diem_1, diem_2, diem_3, diem_4, diem_5, diem_6;
    scanf("%f %f %f %f %f ", &diem_1, &diem_2, &diem_3, &diem_4, &diem_5, &diem_6);
    printf("%.2f", (diem_1 + diem_2 + diem_3 + diem_4 * 2 + diem_5 * 2 + diem_6 * 3) / 10);
    return 0;
}