#include <stdio.h>

int main(){
    char fn[100];
    scanf("%s", &fn);
    FILE *fp;
    fp = fopen(fn, "r");
    if(fp) printf("YES");
    else printf("NO");
    if(fp) fclose(fp);
    return 0;
}