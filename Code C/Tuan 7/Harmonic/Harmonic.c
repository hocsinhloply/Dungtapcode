double harmonic(int n){
    double x = 0;
    for(double i = 1; i <= n; i++) x += 1 / i;
    return x;
}