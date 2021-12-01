int isLegitCapital(char word[]){
    int x = strlen(word);
    int dem1 = 0;
    int dem2 = 0;
    for(int i = 0; i < x; i++){
        if(word[i] >= 'a' && word[i] <= 'z') dem1 += 1;
        if(word[i] >= 'A' && word[i] <= 'Z') dem2 += 1;
    }
    if(dem1 == x || dem2 == x) return 1;
    if(dem2 == 1 && dem1 != 0){
        if(word[0] >= 'A' && word[0] <= 'Z') return 1;
    }
    if(dem1 != 0 && dem2 != 0) return 0;
}