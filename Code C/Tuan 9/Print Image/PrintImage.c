void printImage(int** img, int height, int width){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++) printf("%4d", img[i][j]);
        printf("\n");
    }
}