#include <stdio.h>

int main(){
    for(int i = 1; i < 100; i++){
        int x;
        scanf("%d", &x);
        if(x == -1){
            printf("bye");
            break;
        }
        if(x >= 0){
            if(x % 5 == 0) printf("%d\n", x / 5);
            else printf("-1\n");
        }
        else printf("-1\n");
    }
    return 0;
}