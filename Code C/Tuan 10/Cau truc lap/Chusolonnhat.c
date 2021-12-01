#include <stdio.h>

int main(){
    char s[100];
    scanf("%s", &s);
    int max = s[0] - '0';
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            if(s[i] - '0' > max) max = s[i] - '0';
        }
    }
    printf("%d", max);
    return 0;
}