#include <stdio.h>

int main(){
    int x;
    float y[100];
    float z[100];
    float t[100];
    scanf("%d", &x);
    for(int i = 0; i < 10; i++) scanf("%f", &y[i]);
    for(int i = 0; i < 2; i++) scanf("%f", &z[i]);
    for(int i = 0; i < 2; i++) scanf("%f", &t[i]);
    for(int i = 0; i < 10; i++) if(y[i] != 0) x++;
    if(x < 20) printf("%.1f", 0);
    else {
        for(int i = 0; i < 10; i++){
            for(int j = i + 1; j < 10; j++){
                if(y[i] < y[j]){
                    float doi = y[i];
                    y[i] = y[j];
                    y[j] = doi;
                }
            }
        }
        float sum = 0;
        for(int i = 0; i < 5; i++) sum += y[i] / 5;
        float b = z[0] / 2 + z[1] / 2;
        float a = sum * 0.2 + b * 0.2 + 0.6 * (t[0] + t[1]);
        if(a > 10) printf("%.1f", 10.0);
        else printf("%.1f", a);
    }
    return 0;
}