void moveZeroes (int * arr, char * file){
    FILE *fp = fopen(file, "r");
    int sosohang;
    int dem = 0;
    fscanf(fp, "%d", &sosohang);
    for(int i = 0; i < sosohang; i++) fscanf(fp, "%d", &arr[i]);
    fclose(fp);
    for(int i = 0; i < sosohang; i++) if(arr[i] == 0) dem ++;
    for(int i = 0; i < sosohang; i++){
        int x = 0;
        if(i == sosohang - dem) for(int j = i; j < sosohang; j++) x++;
        if(x == dem) break;
        while(arr[i] == 0) {
            for(int j = i; j < sosohang - 1; j++){
                arr[j] = arr[j + 1];
            }
            arr[sosohang - 1] = 0;
            
        }
    }
    for(int i = 0; i < sosohang; i++) printf("%d ", arr[i]);
}
