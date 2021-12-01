void printImage(const char* path){
    FILE *fp = fopen(path, "r");
    int height, width;
    int max;
    char s[100];
    fgets(s, 100, fp);
    fscanf(fp, "%d", &width);
    fscanf(fp, "%d", &height);
    fscanf(fp, "%d", &max);
    int bien;
    int i = 0;
    max = max / 2;
    while(fscanf(fp, "%d", &bien) != EOF){
        if(bien < max) printf(".");
        else printf("*");
        i++;
        if(i == width) {
            printf("\n");
            i = 0;
        }
    }
    fclose(fp);
}