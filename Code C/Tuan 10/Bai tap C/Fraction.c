struct Fraction
{
    int numerator;
    int denominator;
};


double TheTich (struct Fraction frac){
    return 3.14 * frac.numerator * frac.numerator * frac.denominator;
}

double DienTich (struct Fraction frac){
    return 2 * 3.14 * frac.numerator * frac.denominator;
}