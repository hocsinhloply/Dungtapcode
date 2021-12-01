#include <stdio.h>

int main(){
    float a;
    scanf("%f", &a);
    if(a <= 10 && a >= 9) printf("A+");
    else if (a <= 8.9 && a >= 8.5) printf("A");
    else if (a <= 8.4 && a >= 8.0) printf("B+");    
    else if (a <= 7.9 && a >= 7.0) printf("B");
    else if (a <= 6.9 && a >= 6.5) printf("C+");
    else if (a <= 6.4 && a >= 5.5) printf("C");
    else if (a <= 5.4 && a >= 5.0) printf("D+");
    else if (a <= 4.9 && a >= 4.0) printf("D");
    else  printf("F");
    return 0;
}