int isValid(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '{'){
            if(s[i + 1] == '['){
                if((s[i + 3] != '}' && s[i + 2] == ']') || (s[i + 2] == '(' && s[i + 5] != '}')) return 0;
            }
        }
        if(s[i] == '['){
            if(s[i + 1] == '(' && s[i + 3] != ']') return 0;
        }
        if(s[i] == '(' && s[i + 1] != ')') return 0; 
    }
    return 1;
}