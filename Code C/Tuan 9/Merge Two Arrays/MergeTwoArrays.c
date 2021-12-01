int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2){
    int *x3;
    int n3 = lenArr2 + lenArr1;
    x3 = (int*) malloc(sizeof(int)*n3);
    int i = 0;
    int j = 0;
    int t = 0;
    while((i < lenArr1) || (j < lenArr2)){
        if(firstArr[0] < firstArr[lenArr1 - 1]){   
            if(i < lenArr1 && j < lenArr2){
                if(firstArr[i] <= secondArr[j]){
                    x3[t] = firstArr[i];
                    i++;
                    t++;
                }
                else {
                    x3[t] = secondArr[j];
                    j++;
                    t++;
                }
            }
            if(i < lenArr1 && j == lenArr2){
                x3[t] = firstArr[i];
                t++;
                i++;
            }
            if(i == lenArr1 && j < lenArr2){
                x3[t] = secondArr[j];
                t++;
                j++;
            }
            if(i == lenArr1 && j == lenArr2) break;
        }
        else{
            if(i < lenArr1 && j < lenArr2){
                    if(firstArr[i] >= secondArr[j]){
                        x3[t] = firstArr[i];
                        i++;
                        t++;
                    }
                    else {
                        x3[t] = secondArr[j];
                        j++;
                        t++;
                    }
                }
                if(i < lenArr1 && j == lenArr2){
                    x3[t] = firstArr[i];
                    t++;
                    i++;
                }
                if(i == lenArr1 && j < lenArr2){
                    x3[t] = secondArr[j];
                    t++;
                    j++;
                }
                if(i == lenArr1 && j == lenArr2) break;
        }
    }
    return x3;
}