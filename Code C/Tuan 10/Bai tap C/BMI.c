struct Person{
    double weight;
    double height;
};

double getBMI (struct Person person){
    double x = person.weight / person.height;
    x = x / person.height;
    return x;
}