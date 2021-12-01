#include <stdio.h>

int main(){
    for(int i = 0; i <= 23; i++){
        if(i == 0) printf("12 midnight\n");
        else if(i == 12) printf("12 noon\n");
        else if(i < 12) printf("%dam\n", i);
        else printf("%dpm\n", i - 12);
    }
    return 0;
}