int* isHigher (int* arr, int num, int thres){
    for(int i = 0; i < num; i ++){
        if(arr[i] > thres) arr[i] = 1;
        else arr[i] = 0;
    }
    return arr;
}