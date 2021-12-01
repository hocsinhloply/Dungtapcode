int superPow (int a, int b[], int len){
    int x = 0;
    int t = 0;
    for(unsigned long long i = 0; i < len; i++){
        int y = 1;
        int z = 1;
        for(unsigned long long j = 1; j <= i; j++){
            y = y * 10;
            z = z * 10;
            y = y % 6;
            z = z % 190;
        }
        y = y * b[len - 1 - i];
        z = z * b[len - 1 - i];
        y = y % 6;
        z = z % 190;
        x = x + y;
        x = x % 6;
        t = t + z;
        t = t % 190;
    }
    int m = 1;
    int n = 1;
    for(int i = 1; i <= x; i++){
        m = m * a;
        m = m % 7;
    }
    for(int i = 1; i <= t; i++){
        n = n * a;
        n = n % 191;
    }
    int q = n - m;
    if(t < 0) q = 7 + q;
    int k = 1;
    while(k <= 7){
        if((191 * k + q) % 7 == 0) break;
        k++;
    }
    return (191 * k + n) % 1337;
}