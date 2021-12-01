#include <stdio.h>

int main(){
    int a[100], b[100];
    int n;
    scanf("%d", &n);
    int dem = 0;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]) dem += 1;
        else {
            dem = 0;
            break;
        }
    }
    if(dem != 0) printf("YES");
    else printf("NO");
    return 0;
}