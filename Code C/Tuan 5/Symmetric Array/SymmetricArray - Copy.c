#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    int dem = 0;
    int x = (n % 2 == 0) ? n / 2 : (n + 1) / 2;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < x; i++){
        if(a[i] == a[n - 1 - i]) dem += 1;
    }
    if(dem == x) printf("Symmetric array.");
    else printf("Asymmetric array.");
    return 0;
}