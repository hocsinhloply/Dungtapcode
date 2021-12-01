// #include <stdio.h>

// int fibo(int n, int a1, int a2){
//     int a = a1 + a2;
//     a1 = a2;
//     a2 = a;
//     if(n == 2) return a;
//     return fibo(n - 1, a1, a2);
// }

// int main(){
//     int a0 = 0, a1 = 1;
//     printf("%d %d ", a0, a1);
//     for(int i = 2; i < 12; i++) printf("%d ", fibo(i , a0, a1));
// }

#include <stdio.h>

int fibo(int n){
    if(n == 1) return 1;
    else if (n == 0) return 0;
    else return fibo(n - 1) + fibo(n - 2);
}

int main(){
    for(int i = 0; i < 10; i++) printf("%d ", fibo(i));
    return 0;
}