bool isPrime (int number){
    int dem = 0;
    for(int i = 1; i < sqrt(number); i++){
        if(number % i == 0) dem += 1;
    }
    if(dem == 1) return true;
    else return false;
}