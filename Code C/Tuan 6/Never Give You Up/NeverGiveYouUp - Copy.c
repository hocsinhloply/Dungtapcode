#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                int doi = arr[i];
                arr[i] = arr[j];
                arr[j] = doi;
            }
        }
    }
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}