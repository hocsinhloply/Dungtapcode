#include <stdio.h>

int main(){
    int a[1000];
    for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for(int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if(a[i] > a[j]) {
                int doi = a[i];
                a[i] = a[j];
                a[j] = doi;
            }
        }
    }
    printf("%d", a[2]);
    return 0;
}