#include <stdio.h>

struct sinhvien3
{
    char name[100];
    int age;
    float score;
};

void nhapdulieu(struct sinhvien3 *p){
    fgets(p -> name, 100, stdin);
    scanf("%d %f", &p -> age, &p -> score);
}

void printdulieu(struct sinhvien3 *p){
    printf("%s %d %.1f", p -> name, p -> age, p -> score);
}

int main(){
    struct sinhvien3 sv[2];
    nhapdulieu(&sv[0]);
    printdulieu(&sv[0]);
}