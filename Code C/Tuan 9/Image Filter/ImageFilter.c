int** getImage (int nRows, int nCols){
    int** arr;
    arr = (int**) malloc(nRows * sizeof(int*));
    for(int i = 0; i < nRows; i++) arr[i] = (int*) malloc(nCols * sizeof(int));
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++) scanf("%d", &arr[i][j]);
    }
    return arr;
}

void fillImage (int** image, int nRows, int nCols, int threshold){
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            if(image[i][j] < threshold) image[i][j] = 0;
        }
    }
}

void print (int** image, int nRows, int nCols){
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++) printf("%d ", image[i][j]);
        printf("\n");
    }
}