#include <stdio.h>

int main(){
    int n;
    int a[100];
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)  scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)  sum += a[i];
    printf("%d", sum);
    return 0;
}