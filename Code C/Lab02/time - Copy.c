#include <stdio.h>

int main(){
    int giay;
    scanf("%d", &giay);
    int gio = giay / 3600;
    int phut = (giay - gio * 3600) / 60;
    printf("gio: phut: giay = %d : %d : %d", gio, phut, giay - gio * 3600 - phut * 60);
    return 0;
}