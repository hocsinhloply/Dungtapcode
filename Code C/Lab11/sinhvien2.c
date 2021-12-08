#include <stdio.h>

struct sinhvien2
{
    char name[100];
    int age;
    float score;
};

void nhapdulieu(struct sinhvien2 sv[]){
    for(int i = 0; i < 2; i++){
        fgets(sv[i].name, 100, stdin);
        scanf("%d %f", &sv[i].age, &sv[i].score);
    }
}

void printdulieu(struct sinhvien2 sv[]){
    for(int i = 0; i < 2; i++){
        printf("%s %d %.1f\n", sv[i].name, sv[i].age, sv[i].score);
    }
}

int main(){
    struct sinhvien2 sv[2];
    nhapdulieu(sv);
    printdulieu(sv);
}