#include <stdio.h>
#include <math.h>

void readArray(int arr[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
    }
}

void printArray(int arr[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
}

void scp(int arr[][100], int n, int m){
    printf("scp la: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x = sqrt(arr[i][j]);
            if(x * x == arr[i][j]) printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

int minArray(int arr[][100], int n, int m){
    int min = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    return min;
}

int maxArray(int arr[][100], int n, int m){
    int max = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}

void sortArray(int arr[][100], int n, int m){
    int x[100];
    int t = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            x[t] = arr[i][j];
            t++;
        }
    }
    for(int i = 0; i <= t; i++){
        for(int j = i + 1; j <= t; j++){
            if(x[j] < x[i]){
                int doi = x[i];
                x[i] = x[j];
                x[j] = doi;
            }
        }
    }
    for(int i = 0; i <= t; i++) printf("%d ", x[i]);

    t = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            arr[i][j] = x[t];
            t++;
        }
    }
    printArray(arr, n, m);
}

int main(){
    int n, m;
    int arr[100][100];
    scanf("%d %d", &n, &m);
    readArray(arr, n, m);
    printArray(arr, n, m);
    printf("%d %d", minArray(arr, n, m), maxArray(arr, n, m));
    scp(arr, n, m);
    sortArray(arr, n, m);
    return 0;
}