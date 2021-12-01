void grade10(const char* path){
    FILE *fp = fopen(path, "r");
    char s[1024];
    fgets(s, 1024, fp);
    while(fgets(s, 1024, fp) != NULL){
        int dem = 0;
        int a, b, c = 0;
        for(int i = 0; i < strlen(s); i++){
            if(s[i] == ',') {
                dem ++;
                if(dem == 1) a = i;
                if(dem == 3) b = i;
                if(dem == 5 && s[i + 1] == '1' && s[i + 2] == '0') c = 1;
            }
        }
        if(c == 1) {
            for(int i = a + 1; i < b; i++){
                if(s[i] == ',') printf(" ");
                else printf("%c", s[i]);
            }
            printf("\n");
        }
    }
    fclose(fp);
}