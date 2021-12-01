#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int dem = 0;
    if(a != b) dem += 1;
    if(a != c) dem += 1;
    if(c != b) dem += 1;
    if(a == b && a == c) dem = 1;
    printf("%d", dem);
    return 0;
}