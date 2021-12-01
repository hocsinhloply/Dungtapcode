double* getSquare (double number){
    double *p = &number;
    *p = (*p) * (*p);
    return p;
}