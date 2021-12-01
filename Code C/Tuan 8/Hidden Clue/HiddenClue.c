void showClue (char* path){
    FILE *fp = fopen(path, "r");
    char s[10000];
    fgets(s, 10000, fp);
    printf("%s", s);
}
