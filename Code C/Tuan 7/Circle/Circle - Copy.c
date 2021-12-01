int circle(char moves[]){
    int x = 0;
    int y = 0;
    for(int i = 0; i < strlen(moves); i++){
        switch (moves[i]){
            case 'R':
                x += 1;
                break;
            case 'L':
                x -= 1;
                break;
            case 'U':
                y += 1;
                break;
            case 'D':
                y -= 1;
                break;
        }
    }
    if(x == 0 && y == 0) return 1;
    else return 0;
}