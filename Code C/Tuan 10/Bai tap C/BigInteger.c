//Khai bao cau truc
struct BigInteger
{
    int sign;
    char number[100];
};

//Ham tinh toan
struct BigInteger sum(struct BigInteger first, struct BigInteger second){
    struct BigInteger moi;
    int x = strlen(first.number);
    int y = strlen(second.number);
    //Xet dau 2 so
    if(first.sign == second.sign){
        moi.sign = first.sign;
        //Xet do dai 2 so
        if(x > y){
            //Xet do dai tong
            if(first.number[0] - '0' + 1 == 10){
                moi.number[0] = '1';
                int z = x + 1;
                int t = x - y;
                //Tinh
                for(int i = x; i > )
            }
            else{

            }
        }
        else if(x < y){

        }
        else{

        }
    }
    else{

    }
}