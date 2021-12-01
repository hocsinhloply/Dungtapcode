unsigned int getCorrectResponse(unsigned int pin, unsigned int num){
    int a[100];
    int b[100];
    int pass;
    unsigned int thu = pin;
    int so = 0;
    while(thu != 0){
        thu = thu / 10;
        so ++;
    }
    for(int i = 0; i < so; i++){
        a[so - 1 - i] = pin % 10;
        pin = pin / 10;
    }
    for(int i = 0; i < 10; i++){
        b[9 - i] = num % 10;
        num = num / 10;
    }
    for(int i = 0; i < so; i++){
        pass = pass * 10 + b[a[i]]; 
    }
    return pass;
}