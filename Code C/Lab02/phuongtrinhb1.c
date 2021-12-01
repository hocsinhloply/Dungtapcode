#include <stdio.h>

int main(){
    float hesoA, hesoB;
    scanf("%f%f", &hesoA, &hesoB);
    if(hesoA == 0 && hesoB == 0) printf("Phuong trinh bac 1 vo so nghiem");
    if (hesoB != 0 && hesoA == 0) printf("Phuong trinh bac 1 vo nghiem");
    if (hesoA != 0) printf ("Nghiem phuong trinh bac 1 la %f", -hesoB / hesoA);
    return 0;
}