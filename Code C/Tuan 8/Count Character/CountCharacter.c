int countCharacter(const char* path, char letter){
    FILE *fp = fopen(path, "r");
    char c;
    int count = 0;
    for(c = fgetc(fp); c != EOF; c = fgetc(fp)){
        if(letter >= 'a' && letter <= 'z'){
            if(c == letter || c == letter - 32) count++;
        }
        else if(letter >= 'A' && letter <= 'Z'){
            if(c == letter || c == letter + 32) count++;
        }
    }
    return count;
}