bool judgeSquareSum (int number){
    for(int i = 1; i <= sqrt(number); i++){
        for(int j = i + 1; j <= sqrt(number); j++){
            if(number == pow(i, 2) + pow(j, 2)) return true;
        }
    }
    return false;
}