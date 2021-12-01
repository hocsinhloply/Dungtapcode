double pdf(double x, double mu, double sigma){
    double a = exp(- (x - mu) * (x - mu) / (2 * sigma * sigma));
    double b = 1 / (sigma * sqrt(2 * 3.14));
    return a * b;
}