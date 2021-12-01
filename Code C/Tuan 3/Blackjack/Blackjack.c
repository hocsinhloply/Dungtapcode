#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int x1, x2;
    if ('2' <= a[0] && a[0] <= '9') x1 = a[0] - 48;
    else if (a[0] == 'A') x1 = 11;
    else if(strcmp(a, "10") == 0) x1 = 10;
    else x1 = 10;
    if ('2' <= b[0] && b[0] <= '9') x2 = b[0] - 48;
    else if (b[0] == 'A') x2 = 11;
    else if(strcmp(a, "10") == 0) x2 = 10;
    else x2 = 10;
    int x3 = x1 + x2;
    if ((a[0] == 'A' || b[0] == 'A') && x3 < 20) x3 = x3 - 10;
    if(strcmp(a, "A") == 0 && strcmp(b, "A") == 0) x3 = 2;
    printf("%d", x3);
    return 0;
}