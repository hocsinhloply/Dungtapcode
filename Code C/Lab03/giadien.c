#include <stdio.h>

int main(){
    int sodiencu;
    int sodienmoi;
    scanf("%d %d", &sodiencu, &sodienmoi);
    int sodien = sodienmoi - sodiencu;
    if(sodien >= 0 && sodien <= 50){
        printf("%.2f", sodien * 1.549);
    }    
    if(sodien >= 51 && sodien <= 100){
        printf("%.2f", 50 * 1.549 + (sodien - 50) * 1.6);
    }
    if(sodien >= 101 && sodien <= 200){
        printf("%.2f", 50 * 1.549 + 49 * 1.6 + (sodien - 100) * 1.858);
    }
    if(sodien >= 201 && sodien <= 300){
        printf("%.2f", 50 * 1.549 + 49 * 1.6 + 99 * 1.858 + (sodien - 200) * 2.34);
    }
    if(sodien >= 301 && sodien <= 400){
        printf("%.2f", 50 * 1.549 + 49 * 1.6 + 99 * 1.858 + 99 * 2.34 + (sodien - 300) * 2.615);
    }
    else 
        printf("%.2f", 50 * 1.549 + 49 * 1.6 + 99 * 1.858 + 99 * 2.34 + 99 * 2.615 + (sodien - 400) * 2.701);
    return 0;
}