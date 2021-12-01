#include <stdio.h>

int main(){
    char s[100];
    scanf("%s", &s);
    int a = 10 * (s[0] - '0') + s[1] - '0';
    int b = 10 * (s[3] - '0') + s[4] - '0';
    int c = 1000 * (s[6] - '0') + 100 * (s[7] - '0') + 10 * (s[8] - '0') + s[9] - '0';
    switch (b)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(a > 31) printf("no");
        else printf("yes");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(a > 30) printf("no");
        else printf("yes");
        break;
    case 2:
        if(c % 400 == 0 || (c % 100 != 0 && c % 4 == 0)){
            if(a > 29) printf("no");
            else printf("yes");
        }
        else {
            if(a > 28) printf("no");
            else printf("yes");
        }
        break;
    default:
        printf("no");
        break;
    }
    return 0;
}