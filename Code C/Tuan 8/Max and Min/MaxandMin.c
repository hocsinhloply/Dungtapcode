#include <stdio.h>

int max(FILE *fp){
    int so;
    int socantim;
    fscanf(fp, "%d", &socantim);
    while(fscanf(fp, "%d", &so) != EOF){
        if(so > socantim){
            socantim = so;
        }
    }
    return socantim;
}

int min(FILE *fp){
    int so;
    int socantim;
    fscanf(fp, "%d", &socantim);
    while(fscanf(fp, "%d", &so) != EOF){
        if(so < socantim){
            socantim = so;
        }
    }
    return socantim;
}

int main(){
    char fn[100];
    scanf("%s", &fn);
    FILE *fp = fopen(fn, "r");
    if(fp){
        printf("%d %d", max(fp), min(fp));
        fclose(fp);
    }
    else printf("Mission failed");
    return 0;
}