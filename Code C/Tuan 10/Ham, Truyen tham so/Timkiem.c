#include <stdio.h>
#include <string.h>

int main(){
    int x;
    scanf("%d", &x);
    char s[100][100];
    for(int i = 0; i <= x; i++) fgets(s[i], 100, stdin);
    for(int i = 1; i <= x; i++){
        int a = strlen(s[i]);
        int dem = 0;
        for(int j = 0; j < a; j++){
            if(i < x){
                if(s[i][j] == s[i][a - 2]) {
                    printf("%d\n", j + 1);
                    dem = 1;
                    break;
                }
            }
            else if(s[i][j] == s[i][a - 1]) {
                printf("%d\n", j);
                break;
            }
           if(s[i][j] == ' '){
               if(dem == 0) printf("-1\n");
               break;
           }
        }
    }
}