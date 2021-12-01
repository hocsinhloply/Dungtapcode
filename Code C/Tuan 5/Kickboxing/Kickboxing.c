#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 111) printf("Fly Weight");
    else if (n >= 112 && n <= 114) printf("Super Fly Weight");
    else if (n >= 115 && n <= 117) printf("Bantam Weight");
    else if (n >= 118 && n <= 121) printf("Super Bantam Weight");
    else if (n >= 122 && n <= 125) printf("Feather Weight");
    else if (n >= 126 && n <= 129) printf("Super Feather Weight");
    else if (n >= 130 && n <= 134) printf("Light Weight");
    else if (n >= 135 && n <= 139) printf("Super Light Weight");
    else if (n >= 140 && n <= 146) printf("Welter Weight");
    else if (n >= 147 && n <= 153) printf("Super Welter Weight");
    else if (n >= 154 && n <= 159) printf("Middle Weight");
    else if (n >= 160 && n <= 166) printf("Super Middle Weight");
    else if (n >= 167 && n <= 173) printf("Light Heavy Weight");
    else if (n >= 174 && n <= 182) printf("Super Light Heavy Weight");
    else if (n >= 183 && n <= 188) printf("Cruiser Weight");
    else if (n >= 189 && n <= 197) printf("Super Cruiser Weight");
    else if (n >= 198 && n <= 208) printf("Heavy Weight");
    else if (n >= 209) printf("Super Heavy Weight");
    else printf("");   
    return 0;
}