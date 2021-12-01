double estimatedTime(const char* path){
    FILE *fp = fopen(path, "r");
    double a[5];
    for(int i = 0; i < 5; i++){
        for(char c = fgetc(fp); c != EOF; c = fgetc(fp)){
            if(c == ':'){
                c = fgetc(fp);
                fscanf(fp, "%lf", &a[i]);
                break;
            }
        }
    }
    fclose(fp);
    double x;
    x = sqrt((a[0] - a[2]) * (a[0] - a[2]) + (a[1] - a[3]) * (a[1] - a[3])) / a[4];
    return x;
}