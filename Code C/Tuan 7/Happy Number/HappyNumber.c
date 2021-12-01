int isHappyNumber(int n){
    int x = n;
    int dem = 0;
    while(x != 0){
        dem = dem + (x % 10) * (x % 10);
        x = x / 10;
    }
    if(dem == 1) return 1;
    if(dem == 4) return 0;
    return isHappyNumber(dem);
}