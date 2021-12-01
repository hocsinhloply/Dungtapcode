#include <stdlib.h>
#include <stdio.h>

double *min(double *a, int n){
    if(a == NULL) return NULL;
    double *tim = &a[0];
    for(int i = 0; i < n; i++) if(a[i] < *tim) tim = &a[i];
    return tim;
}

int main(){
    // int n;
    // scanf("%d", &n);
    // double a[100];
    // for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
    // double x = *min(a, n);
    // printf("%.lf", x);

    int n;
    scanf("%d", &n);
    double *a;
    a = (double*) malloc(sizeof(double) * n);
    for(int i = 0; i < n; i++) scanf("%lf", &a[i]);
    double x = *min(a, n);
    printf("%.lf", x);
    free(a);
}