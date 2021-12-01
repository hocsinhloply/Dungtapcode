#include <stdio.h>

int main(){
    int dem = 0;
    for(int i = 1000; i <= 2000; i++){
        printf("%d ", i);
        dem += 1;
        if(dem % 5 == 0) printf("\n");
    }
    return 0;
}