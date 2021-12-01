bool isMersenne(int p){
    int dem = 0;
    for(int i = 1; i < sqrt(p); i++){
        if(p % i == 0) dem += 1;
    }
    if(dem != 1) return 0;
    unsigned int m = pow(2, p) - 1;
    int dem1 = 0;
    for(int i = 1; i < sqrt(m); i++){
        if(m % i == 0) dem1 += 1;
    }
    if(dem1 != 1) return 0;
    else return 1;
}