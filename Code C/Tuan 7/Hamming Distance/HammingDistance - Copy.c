int hammingDistance(int x, int y){
    if(x == y) return 0;
    int dem1 = x;
    int dem2 = y;
    int dem = 0;
    if(x > y){
        while(dem1 != 0){
            if(dem1 % 2 != dem2 % 2) dem += 1;
            dem1 = dem1 / 2;
            dem2 = dem2 / 2;
        }
    }
    else{
        while(dem2 != 0){
            if(dem1 % 2 != dem2 % 2) dem += 1;
            dem1 = dem1 / 2;
            dem2 = dem2 / 2;
        }
    }
    return dem;
}