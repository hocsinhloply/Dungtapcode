#include <stdio.h>
#include <string.h>

int main(){
    char s[10000];
    fgets(s, 10000, stdin);
    int dem = 1;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '.') break;
        if(s[i] != ' ' && s[i + 1] == ' ') dem += 1;
    }
    printf("%d", dem);
    return 0;
}
