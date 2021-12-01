int findWords (char * path){
    FILE *fp;
    fp = fopen(path,"r");
    char a[200],c;
    char word[52] = "qwertyuiopQWERTYUIOPasdfghjklASDFGHJKLzxcvbnmZXCVBNM";
    int num1=0, num2=0, num3=0, count=0;
    for (c = getc(fp); c != EOF; c = getc(fp)){
        for (int j = 0; j<52; j++){
            if(word[j] == c){
                if(j<20){
                    num1++;
                }else if(j<38){
                    num2++;
                }else{
                    num3++;
                }
            }else if(c == '\n'){
                if(num1>0 && num2 ==0 && num3 == 0){
                    count++;
                }
                else if(num1==0 && num2 >0 && num3 == 0){
                    count++;
                }
                else if(num1==0 && num2 ==0 && num3 > 0){
                    count++;
                }
                num1=0;
                num2=0;
                num3=0;
            }
        }
    }
    return count;
}