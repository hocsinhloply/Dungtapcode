#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int muon = n;
    int cs2 = 0;
    int i = 0;
    if(n >= 0){
        while(muon > 0){
            cs2 = cs2 + (muon % 2) * pow(10, i);
            muon = muon / 2;
            i++;
        }
        printf("%d", cs2);
    }
    else printf("invalid");
    return 0;
}