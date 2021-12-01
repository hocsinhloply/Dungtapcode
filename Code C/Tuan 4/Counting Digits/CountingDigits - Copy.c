#include <stdio.h>

int main(){
    char s[100];
    scanf("%s", &s);
    int dem = 0;
    for(int i = 0; i < sizeof(s); i++){
        if(s[i] >= '0' && s[i] <= '9') dem += 1;
    }
    printf("%d", dem);
    return 0;
}