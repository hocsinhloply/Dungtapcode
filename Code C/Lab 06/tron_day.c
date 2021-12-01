#include <stdio.h>
#include <stdlib.h>

int *tronday2(int *x1, int n1, int *x2, int n2){
    int *x3;
    int n3 = n2 + n1;
    x3 = (int*) malloc(sizeof(int)*n3);
    for(int i = 0; i < n1; i++) x3[i] = x1[i];
    for(int i = n1; i < n3; i++) x3[i] = x2[i - n1];
    for(int i = 0; i < n3; i++){
        for(int j = i + 1; j < n3; j++){
            if(x3[i] > x3[j]){
                int doi = x3[i];
                x3[i] = x3[j];
                x3[j] = doi;
            }
        }
    }
    return x3;
}

int *tronday1(int *x1, int n1, int *x2, int n2){
    int *x3;
    int n3 = n2 + n1;
    x3 = (int*) malloc(sizeof(int)*n3);
    int i = 0;
    int j = 0;
    int t = 0;
    while((i < n1) || (j < n2)){
        if(i < n1 && j < n2){
            if(x1[i] <= x2[j]){
                x3[t] = x1[i];
                i++;
                t++;
            }
            else {
                x3[t] = x2[j];
                j++;
                t++;
            }
        }
        if(i < n1 && j == n2){
            x3[t] = x1[i];
            t++;
            i++;
        }
        if(i == n1 && j < n2){
            x3[t] = x2[j];
            t++;
            j++;
        }
        if(i == n1 && j == n2) break;
    }
    return x3;
}

int main(){
    int a[100], b[100];
    int x, y;
    scanf("%d%d", &x, &y);
    for(int i = 0; i < x; i++) scanf("%d", &a[i]); 
    for(int i = 0; i < x; i++) scanf("%d", &b[i]);
    // int *p = tronday2(a, x, b, y);
    // for(int i = 0; i < x + y; i++) printf("%d ", p[i]);
}