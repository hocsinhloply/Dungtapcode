void readArray(int array[], int n){
    for(int i = 0; i < n; i++) scanf("%d", &array[i]);
}

int compareArray(int array1[], int array2[], int n){
    int dem = 0;
    for(int i = 0; i < n; i++) if(array1[i] == array2[i]) dem += 1;
    if(dem == n) return true;
    else return false;
}