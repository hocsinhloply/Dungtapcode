#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch(n){

    case 0:
        printf("2.61");
        break;
    
    case 1:
        printf("2.95");
        break;

    default:{
        printf("3.17");
        break;}
    }
    return 0;
}