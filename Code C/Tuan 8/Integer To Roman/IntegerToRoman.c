void intToRoman (char * path){
    FILE *fp = fopen(path, "r");
    int x;
    fscanf(fp, "%d", &x);
    fclose(fp);
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for(int i = 0; i < 13; i++){
        while(x - values[i] >= 0){
            switch (values[i])
            {
            case 1000:
                printf("M");
                break;
            case 900:
                printf("CM");
                break;
            case 500:
                printf("D");
                break;
            case 400:
                printf("CD");
                break;
            case 100:
                printf("C");
                break;
            case 90:
                printf("XC");
                break;
            case 50:
                printf("L");
                break;
            case 40:
                printf("XL");
                break;
            case 10:
                printf("X");
                break;
            case 9:
                printf("IX");
                break;
            case 5:
                printf("V");
                break;
            case 4:
                printf("IV");
                break;
            case 1:
                printf("I");
                break;
            }
            x -= values[i];
        }
    }
}