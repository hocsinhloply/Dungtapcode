int* getPointerToTen(){
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    return p;
}