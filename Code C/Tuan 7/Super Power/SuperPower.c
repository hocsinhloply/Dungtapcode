// int superPow (int a, int b[], int len){
//     int x = 0;
//     int t = 0;
//     for(unsigned long long i = 0; i < len; i++){
//         int y = 1;
//         int z = 1;
//         for(unsigned long long j = 1; j <= i; j++){
//             y = y * 10;
//             z = z * 10;
//             y = y % 6;
//             z = z % 190;
//         }
//         y = y * b[len - 1 - i];
//         z = z * b[len - 1 - i];
//         y = y % 6;
//         z = z % 190;
//         x = x + y;
//         x = x % 6;
//         t = t + z;
//         t = t % 190;
//     }
//     int m = 1;
//     int n = 1;
//     for(int i = 1; i <= x; i++){
//         m = m * a;
//         m = m % 7;
//     }
//     for(int i = 1; i <= t; i++){
//         n = n * a;
//         n = n % 191;
//     }
//     int q = n - m;
//     if(t < 0) q = 7 + q;
//     int k = 1;
//     while(k <= 7){
//         if((191 * k + q) % 7 == 0) break;
//         k++;
//     }
//     return (191 * k + n) % 1337;
// }

int powerMod(long long int base, long long int power){
    long long int mod = 1337;
    long long int ret = 1;
    while(power){
        if(power % 2 == 1) ret = (ret * base) % mod;
        base = (base * base) % mod;
        power = power / 2;
    }
    return ret;
}

int superPow (int a, int b[], int len){
    if(len == 0) return 1;
    int last = b[len - 1];
    b[len - 1] = '\0';
    len--;
    return (powerMod(superPow(a, b, len), 10) * powerMod(a, last)) % 1337;
}