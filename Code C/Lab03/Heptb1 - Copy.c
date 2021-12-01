#include <stdio.h>
 
int main(){
    float a1, b1, c1;
    float a2, b2, c2;
    scanf("%f %f %f", &a1, &b1, &c1);
    scanf("%f %f %f", &a2, &b2, &c2);
    // he so != 0
    if((a1 / a2) == (b1 / b2) && (a1 / a2) == (c1 / c2)) printf("phuong trinh vo so nghiem");
    else if((a1 / a2) == (b1 / b2) && (a1 / a2) != (c1 / c2)) printf("phuong trinh vo nghiem");
    else{
        printf("y = %.2f\n", (c2 - a2 * c1 / a1) / (b2 - a2 * b1 / a1));
        printf("x = %.2f", (c2 - b2 * c1 / b1) / (a2 - b2 * a1 / b1));
    }
    return 0;
}
