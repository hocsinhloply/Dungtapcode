void housesOfHogwarts(const char* path){
    FILE *fp = fopen(path, "r");
    char name[1024];
    fgets(name, 1024, fp);
    while(fgets(name, 1024, fp) != NULL) printf("%s", name);
    fclose(fp);
}