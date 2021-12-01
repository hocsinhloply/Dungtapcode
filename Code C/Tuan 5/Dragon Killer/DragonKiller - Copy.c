#include <stdio.h>

int main(){
    int n = 9;
    int dau = 3;
    int duoi = 3;
    int a[100];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++){
        if(a[i] == 2) duoi += 1;
        if(a[i] == 4) {
            duoi -= 2;
            dau += 1;
        }
        if(a[i] == 3) dau -= 2;
        if(dau == 0 && duoi == 0) {
            printf("You slayed the Dragon.");
            break;
        }
        if(a[i] < 1 || a[i] > 4 || dau < 0 || duoi < 0) {
            printf("invalid attack");
            break;
        }
        if(i == n - 1 && (dau != 0 || duoi != 0)) printf("You die.");    
    }
    return 0;
}