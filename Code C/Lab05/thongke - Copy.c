#include <stdio.h>
#include <math.h>

void readArray(int a[], int n){
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
}

double average(int a[], int n){
    int avg = 0;
    for(int i = 0; i < n; i++) avg += a[i];
    return avg / n;
}

double dolechchuan(int a[], int n){
    double dolechchuan = 0;
    for(int i = 0; i < n; i++) dolechchuan += (a[i] - average(a, n)) * (a[i] - average(a, n));
    dolechchuan = sqrt(dolechchuan / n);
    return dolechchuan;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    readArray(a, n);
    printf("%.lf ", average(a, n));
    printf("%.lf", dolechchuan(a, n));
}