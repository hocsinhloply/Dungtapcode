double averageTime(const char* path){
    FILE *fp = fopen(path, "r");
    char s[100];
    fgets(s, 100, fp);
    int lap;
    double sum = 0;
    for(char c = fgetc(fp); c != EOF; c = fgetc(fp)){
        if(c == ','){
            double x;
            lap++;
            fscanf(fp, "%lf", &x);
            sum += x;
        }
    }
    fclose(fp);
    if(lap == 0) return 0;
    else return sum / lap;
}