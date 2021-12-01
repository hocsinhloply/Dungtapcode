double* getPointerToPi(){
    double *p;
    p = (double*)malloc(sizeof(double));
    *p = 3.14159;
    return p;
}