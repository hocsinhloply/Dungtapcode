// #include <stdio.h>
// #include <string.h>

// char *xoa(char *str){
//     int len = strlen(str);
//     str[len - 1] = '\0';
//     return str;
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     char a[100][100];
//     for(int i = 0; i <= n; i++){
//         fgets(a[i], 100, stdin);
//     }
//     for(int i = 0; i <= n; i++){
//         if(strcmp(a[i], "Nemo\n") == 0){
//             if(i == n){
//                 printf("%s and %s", xoa(a[i - 1]), xoa(a[1]));
//             }
//             else printf("%s and %s", xoa(a[i - 1]), xoa(a[i + 1]));
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

void xoa(char a[]){
    a[strlen(a) - 1] = '\0';
}

int main(){
    int n;
    scanf("%d", &n);
    char a[100][100];
    for(int i = 0; i <= n; i++) fgets(a[i], 100, stdin);
    for(int i = 0; i <= n; i++){
        if(strcmp(a[i], "Nemo\n") == 0){
            if(i == n){
                xoa(a[1]);
                xoa(a[i - 1]);
                printf("%s and %s", a[i - 1], a[1]);
            }
            else {
                xoa(a[i + 1]);
                xoa(a[i - 1]);
                printf("%s and %s", a[i - 1], a[i + 1]);
            }
        }
    }
    return 0;
}