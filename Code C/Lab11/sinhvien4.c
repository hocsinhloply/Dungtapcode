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
    printf("%s %d %.1f\n", p -> name, p -> age, p -> score);
}

int main(){
    struct sinhvien3 sv[10];
    for(int i = 0; i < 10; i++){
        nhapdulieu(&sv[i]);
        printdulieu(&sv[i]);
    }
}