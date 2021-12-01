#include <stdio.h>

int main(){
    char s[10000];
    fgets(s, 10000, stdin);
    int dem = 1;
    for(int i = 0; i < sizeof(s); i++){
        if(s[i] == ' ') dem += 1;
        if(s[i] == '\0') break;
    }
    if(dem == 1) printf("1 word");
    else printf("%d words", dem);
    return 0;
}
