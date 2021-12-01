int getMoney (int * houses, char * path){
    FILE *fp = fopen(path, "r");
    int i = 0;
    while(fscanf(fp, "%d", &houses[i]) != EOF){
        i++;
    }
    fclose(fp);
    return i + 1;
}

int rob(int * houses, int numOfHouses){
    if(numOfHouses == 0) return 0;
    if(numOfHouses == 1) return houses[0];
    int prev = houses[0];
    int cur = fmax(prev, houses[1]);
    for (int i = 2; i < numOfHouses; ++i) {
        int tmp = cur;
        cur = fmax(houses[i] + prev, cur);
        prev = tmp;
    }
    return cur;
}