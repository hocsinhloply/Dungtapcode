#include <stdio.h>

int main(){
    char kitu;
    scanf("%c", &kitu);
    if (kitu >= 'a' && kitu <= 'z') printf("Chu in thuong");
    else if (kitu >= 'A' && kitu <= 'Z') printf("Chu in hoa");
    else if (kitu >= '0' && kitu <= '9') printf("Chu so");
    else if (kitu == 9 || kitu == 10 || kitu == 32) printf("Khoang trang");
    else printf("Ki tu dac biet");
    return 0;
}