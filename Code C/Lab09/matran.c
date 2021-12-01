#include <stdio.h>

void readArray(int arr[][100], int x, int y){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++) scanf("%d", &arr[i][j]);
    }
}

void printArray(int arr[][100], int x, int y){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
}

int sumArray(int arr[][100], int x, int y){
    int sum = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++) sum += arr[i][j];
    }
    return sum;
}

void duongcheo(int arr[][100], int x){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if((x - 1) % 2 == 0) if(i == j && i == (x - 1) / 2) printf(" ");
            if(j == i || j == x - 1 - i) printf("%d ", arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}

void tich2matran(int arr1[][100], int arr2[][100], int m, int n, int p){
    int arr3[100][100];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            for(int k = 0; k < n; k++) arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
    printArray(arr3, m, p);
}

int main(){
    int m, n;
    int p;
    scanf("%d %d %d", &m, &n, &p);
    int arr1[100][100];
    int arr2[100][100];
    readArray(arr1, m, n);
    readArray(arr2, p, p);
    tich2matran(arr1, arr2, m, n, p);
}