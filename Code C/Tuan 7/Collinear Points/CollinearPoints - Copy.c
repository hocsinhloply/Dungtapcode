int isCollinear(int x1, int y1, int x2, int y2, int x3, int y3){
    double a = x1 - x2;
    double b = y1 - y2;
    double c = x1 - x3;
    double d = y1 - y3;
    if(x1 == x2 && x2 == x3) return 1;
    if(y1 == y2 && y2 == y3) return 1;
    if(a / c == b / d) return 1;
    else return 0;
}