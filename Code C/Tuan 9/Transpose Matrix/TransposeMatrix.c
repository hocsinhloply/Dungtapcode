int** transpose (int** matrix, int m, int n){
    int** arr;
    arr = (int**) malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++) arr[i] = (int*) malloc(m * sizeof(int));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) arr[i][j] = matrix[j][i];
    }
    return arr;
}