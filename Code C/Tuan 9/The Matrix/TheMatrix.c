int** inputMatrix(int nRows, int nCols){
    int** arr;
    arr =(int**) malloc (nRows*sizeof(int*));
    for (int i=0; i< nRows; i++) 
		arr[i]=(int*) malloc (nCols*sizeof(int));
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++) scanf("%d", &arr[i][j]);
    }
    return arr;
}

void printMatrix(int** matrix, int nRows, int nCols){
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }
}