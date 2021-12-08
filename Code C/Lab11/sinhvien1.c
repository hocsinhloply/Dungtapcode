#include <stdio.h>

struct sinhvien1
{
    char name[100];
    int age;
    float score;
};

int main(){
    struct sinhvien1 sv[2];
    fgets(sv[0].name, 100, stdin);
    scanf("%d %f", &sv[0].age, &sv[0].score);
    fgets(sv[1].name, 100, stdin);
    scanf("%d %f", &sv[1].age, &sv[1].score);
    printf("%s %d %.1f", sv[0].name, sv[0].age, sv[0].score);
    printf("%s %d %.1f", sv[1].name, sv[1].age, sv[1].score);
}