#include <stdio.h>

struct thanhpho
{
    char ten[100];
    float thunhap;
    float danso;
    int docviet;
};

void nhapdulieu(struct thanhpho *p){
    fgets(p -> ten, 100, stdin);
    scanf("%f %f %d", &p -> thunhap, &p -> danso, &p -> docviet);
}

int main(){
    int n;
    scanf("%d", &n);
    struct thanhpho tp[100];
    for(int i = 0; i < n; i++) nhapdulieu(&tp[i]);
    float maxtn = tp[0].thunhap;
    int maxdv = tp[0].docviet;
    for(int i = 0; i < n; i++){
        if(tp[i].thunhap > maxtn) maxtn = tp[i].thunhap;
        if(tp[i].docviet > maxdv) maxdv = tp[i].docviet;
    }
    printf("%.f %d", maxtn, maxdv);
}