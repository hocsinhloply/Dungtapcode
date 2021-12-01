int* getPointerToArray(int n){
    int *arr;
    arr = (int *) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    return arr;
}