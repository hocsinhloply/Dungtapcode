#include <stdio.h>
#include <math.h>

int main(){
    float U, L, F;
    scanf("%f%f%f", &U, &L, &F);
    if((0 <= U && U <= 10) && (0 <= L && L <= 10) && (0 <= F && F <= 10)) printf("%.1f", (float) U * L * sin((9 * F) * 3.14 / 180));
    else printf("invalid");
}