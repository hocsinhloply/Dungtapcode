#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0) printf("phuong trinh co vo so nghiem");
    else if(a == 0){
        if(c == 0 && b == 0) printf("phuong trinh co vo so nghiem");
        else if(b == 0 && c != 0) printf("phuong trinh vo nghiem");
        else if(c == 0 && b != 0) printf("0.00000");
        else printf("phuong trinh co 1 nghiem \n%.5f",- c / b);
    }
    else {
        float denta = b * b - 4 * a * c;
        if(denta < 0) printf("phuong trinh vo nghiem");
        else if(denta == 0) {
            if(-b/(2*a) == 0) printf("phuong trinh co 1 nghiem \n0.00000"); 
            else printf("phuong trinh co 1 nghiem \n%.5f", - b / (2 * a));
        }
        else printf("phuong trinh co 2 nghiem \n%.5f %.5f", (-b - sqrt(denta))/(2 * a), (-b + sqrt(denta))/ (2 * a));
    }
    return 0;
}