#include <stdio.h>

int main(){
    double a;
    scanf("%lf", &a);
    if (a >= 3.6) printf("Xuat sac");
    else if(a < 3.6 && a >= 3.2) printf("Gioi");
    else if(a < 3.2 && a >= 2.5) printf("Kha");
    else if(a < 2.5 && a >= 2.0) printf("Trung binh");
    else printf("Khong ra duoc truong");
    return 0;    
}
// Xuất sắc: CGPA ≥ 3.6
// Giỏi: 3.2 ≤ CGPA < 3.6
// Khá: 2.5 ≤ CGPA < 3.2
// Trung bình: 2.0 ≤ CGPA < 2.5
// Không được ra trường: CGPA < 2.0