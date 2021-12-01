#include <stdio.h>

int main(){
    int a[100][100];
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) scanf("%f", &a[i][j]);
    }
    int x, y;
    scanf("%d %d", &x, &y);
    if(a[x - 1][y - 1] == 0) printf("Your seat is booked. Please complete the payment.");
    else printf("Seat %d%d is sold.", x, y);
    return 0;
}