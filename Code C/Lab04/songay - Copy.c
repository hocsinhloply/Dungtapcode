#include <stdio.h>

int namnhuan(int a){
    if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) 
        return 1;
    else return 0;
}

int main(){
    int m, y;
    scanf("%d %d", &m, &y);
    switch (m)
    {
    case 2:{
        if(namnhuan(y) == 1) printf("29");
        else printf("28");
        break;
    }
    case 4:
    case 6:
    case 9:
    case 11:{
        printf("30");
        break;
    }
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:{
        printf("31");
        break;
    }
    default:
        break;
    }
}