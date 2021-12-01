#include <stdio.h>

int main(){
    int m, y;
    scanf("%d %d", &m, &y);
    switch (m)
    {
    case 2:
        if(y % 4 == 0){
            if(y % 400 == 0){
                printf("Thang %d nam %d co %d", m, y, 29);
                break;
            }
            else if(y % 100 == 0 && y % 16 != 0){
                printf("Thang %d nam %d co %d", m, y, 28);
                break;
            }
            else{
                printf("Thang %d nam %d co %d", m, y, 29);
                break;
            }
        }
        else{
            printf("Thang %d nam %d co %d", m, y, 28);
            break;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
            {
            printf("Thang %d nam %d co %d", m, y, 30);
            break;
        }
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            {
            printf("Thang %d nam %d co %d", m, y, 31);
            break;
        }
    default:
        break;
    }
}