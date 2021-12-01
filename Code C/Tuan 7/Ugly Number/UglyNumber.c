int isUgly(int n){
    int dem = 0;
    if(n % 2 == 0) dem += 1;
    if(n % 3 == 0) dem += 1;
    if(n % 5 == 0) dem += 1;
    for(int i = 2; i < sqrt(n); i++){
        if(i % 2 != 0 && i % 5 != 0 && i % 3 != 0){
            if(n % i == 0) return 0;
        }
    }
    if(dem != 0) return 1;
}