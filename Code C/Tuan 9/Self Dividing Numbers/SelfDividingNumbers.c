int a(int x){
    int s = x;
    while(s > 0){
        int z = s % 10;
        s = s / 10;
        if(z == 0 && s != 0) return 0;
        if(x % z != 0) return 0;
    }
    return 1;
}

int* selfDividingNumbers(int left, int right, int* returnSize){
    int j = 0;
    int *arr;
    arr = (int*) malloc(sizeof(int));
    for(int i = left; i <= right; i++){
        if(a(i) == 1){
            arr[j] = i;
            j++;
        }
    }
    *returnSize = j;
    return arr;
}