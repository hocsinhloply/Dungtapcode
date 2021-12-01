void readHeader(const char* path){
    FILE *fp = fopen(path, "r");
    char s[1024];
    fgets(s, 1024, fp);
    fclose(fp);
    if(s[0] == 'P' && s[1] >= '1' && s[1] <= '6') printf("%c%c", s[0], s[1]);
    else printf("unknown filetype");
}