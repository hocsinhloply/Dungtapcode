#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    int dem = 0;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) 
        if(a[i] == 42) dem ++;
    if(dem == 0) printf("It's a joke!");
    else printf("I've found the meaning of life!");
    return 0;
}