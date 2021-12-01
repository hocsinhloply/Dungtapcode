void printGreeting (struct Greeting newGreet){
    scanf("%s", &newGreet.greet);
    scanf("%d", &newGreet.iter);
    for(int i = 1; i <= newGreet.iter; i++){
        printf("%s\n", newGreet.greet);
    }
}