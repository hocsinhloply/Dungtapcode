bool canPlaceFlowers (int flowerbed[], int n, int k){
    for(int i = 0; i < n; i++){
        if(flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0){
            k--;
            flowerbed[i] = 1;
        }
        if(i == n - 1 && flowerbed[i - 1] == 0 && flowerbed[i] == 0) k--;
        if(k == 0) return 1;
    }
    return 0;
}