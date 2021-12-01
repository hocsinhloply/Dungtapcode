char* pigLatin(char word[]){
    int a = strlen(word);
    char s[] = "ueoai";
    int dem = 0;
    for(int i = 0; i < 5; i++){
        if(word[0] == s[i]) {
            dem += 1;
            break;
        }
    }
    if(dem == 1){
        word[a] = 'w';
        word[a + 1] = 'a';
        word[a + 2] = 'y';
        return word;
    }
    else{
        char doi = word[0];
        for(int i = 0; i < strlen(word); i++){
            if(i < strlen(word) - 1) word[i] = word[i + 1];
            else word[i] = doi;
        }
        word[a] = 'a';
        word[a + 1] = 'y';
        return word;
    }
}