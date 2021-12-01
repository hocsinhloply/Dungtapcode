#include <stdio.h>

int main(){
    float height, weigh;
    scanf("%f%f", &weigh, &height);
    float BMI = weigh / (height * height);
    if (BMI < 18.5){
        printf("Thieu can\n");
    }
    else if (BMI >= 18.5 && BMI < 25){
        printf("Binh thuong\n");
    }
    else if (BMI >= 25 && BMI < 30){
        printf("Thua can\n");
    }
    else{
        printf("Beo phi");
    }
    return 0; 
}