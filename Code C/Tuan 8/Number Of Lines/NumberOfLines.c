#include<stdio.h>

int countLines(FILE* inFile)
{
    int count = 1; char line[100];
    while(fgets(line, 100, inFile) != NULL)
    {
        count++;
    }
    return count;
}
int main()
{
    char fn[100];
    scanf("%s", &fn);
    FILE* fp = fopen(fn, "rt");
    if(fp != NULL)
    {
        int cnt = countLines(fp);
        printf("%d", cnt);
        fclose(fp);
    }
    else printf("Mission failed");
    return 0;
}