#include <stdio.h>
#include <math.h>

int main(){
    float time, velocity;
    scanf("%f %f", &time, &velocity);
    float w = 35.74 + 0.6215 * time + (0.4275 * time - 35.75) * pow(velocity, 0.16);
    if (time <= 50 && time >= - 50) {
        if (velocity >= 3 && velocity <= 120) printf("%.2f", w);
    }
    return 0;
}