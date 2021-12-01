#include <stdio.h>

void readarray(double a[], int n){
    for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
}

double min(double a[], int n){
    double min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < min) min = a[i];
    }
    return min;
}

double max(double a[], int n){
    double max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    return max;
}

int sumofponum(double a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0) sum += a[i];
    }
    return sum;
}

int negnum(double a[], int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0) dem ++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
}