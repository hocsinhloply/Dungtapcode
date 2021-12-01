#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0) printf("phuong trinh co vo so nghiem");
    else if(a == 0){
        if(c == 0 && b == 0) printf("phuong trinh co vo so nghiem");
        else if(b == 0 && c != 0) printf("phuong trinh vo nghiem");
        else if(c == 0 && b != 0) printf("phuong trinh co 1 nghiem \n0.00000");
        else {
            if(-c / b > 0) printf("phuong trinh co 2 nghiem \n%.5f %.5f", -sqrt(-c/ b), sqrt(-c / b));
            else printf("phuong trinh vo nghiem");
        }
    }
    else {
        float denta = b * b - 4 * a * c;
        if(denta < 0) printf("phuong trinh vo nghiem");
        else if(denta == 0) {
            if(-b/(2*a) == 0) printf("phuong trinh co 1 nghiem \n0.00000"); 
            else {
                if(-b / (2*a) > 0) printf("phuong trinh co 2 nghiem \n%.5f %.5f", -sqrt(-b/(2*a)), sqrt(-b / (2*a)));
                else printf("phuong trinh vo nghiem");
            }
        }
        else{
            float x = (-b - sqrt(denta))/ (2 * a);
            float y = (-b + sqrt(denta))/ (2 * a);
            if(x > 0 && y > 0) 
                printf("phuong trinh co 4 nghiem \n%.5f %.5f %.5f %.5f", -sqrt(y), -sqrt(x), sqrt(x), sqrt(y));
            else if(x > 0 && y == 0)
                printf("phuong trinh co 3 nghiem \n%.5f %.5f %.5f", -sqrt(x), sqrt(y), sqrt(x));
            else if(x == 0 && y > 0)
                printf("phuong trinh co 3 nghiem \n%.5f %.5f %.5f",-sqrt(y), sqrt(x), sqrt(y));
            else if(x > 0 && y < 0)
                printf("phuong trinh co 2 nghiem \n%.5f %.5f", -sqrt(x), -sqrt(x));
            else if(x < 0 && y > 0)
                printf("phuong trinh co 2 nghiem \n%.5f %.5f",-sqrt(y), sqrt(y));
            else if(x == 0 && y < 0)
                printf("phuong trinh co 1 nghiem \n0.00000");
            else if(x < 0 && y == 0)
                printf("phuong trinh co 1 nghiem \n0.00000");
            else if(x == 0 && y == 0)
                printf("phuong trinh co 1 nghiem \n0.00000");
            else printf("phuong trinh vo nghiem");
        }
    }
    return 0;
}