#include <stdio.h>

int main(){
    int a[100];
    for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for(int i = 0; i < 5; i++){
        if(a[i] == 4) printf("* * * * Q\n");
        else if(a[i] == 3) printf("* * * Q *\n");
        else if(a[i] == 2) printf("* * Q * *\n");
        else if(a[i] == 1) printf("* Q * * *\n");
        else printf("Q * * * *\n");
    }
}