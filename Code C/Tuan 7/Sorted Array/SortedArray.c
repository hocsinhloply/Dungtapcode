void sort(float array[], int size, bool isAscending){
    if(isAscending == true){
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                if(array[j] < array[i]){
                    float doi = array[i];
                    array[i] = array[j];
                    array[j] = doi;
                }
            }
        }
    }
    else{
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                if(array[j] > array[i]){
                    float doi = array[i];
                    array[i] = array[j];
                    array[j] = doi;
                }
            }
        }
    }
}