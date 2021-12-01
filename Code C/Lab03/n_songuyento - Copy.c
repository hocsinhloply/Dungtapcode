#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int i = 2;
    scanf("%d", &n);
    while (n > 0){
        int dem = 0;
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0) dem += 1;
            else dem += 0;
        }
        if(dem == 1){
            printf("%d ", i);
            n--;
        }
        i++;
    }
    return 0;
}