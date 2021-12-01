#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("Kich thuc kieu char la %d\n",sizeof(char)); 
    printf("Gia tri max cua kieu char la %d \n", CHAR_MAX);
    printf("Gia tri min cua kieu char la %d \n", CHAR_MIN);
    printf("Kich thuc kieu unsigned char la %d\n",sizeof(unsigned char));
    printf("Gia tri max cua kieu unsigned char la %d \n", UCHAR_MAX);
    printf("Gia tri min cua kieu unsigned char la %d \n", 0);
    printf("Kich thuc kieu short la %d\n",sizeof(short));
    printf("Gia tri max cua kieu short la %hi \n", SHRT_MAX );
    printf("Gia tri min cua kieu short la %hi \n", SHRT_MIN);
    printf("Kich thuc kieu int la %d\n",sizeof(int));
    printf("Gia tri max cua kieu int la %d \n", INT_MAX);
    printf("Gia tri min cua kieu int la %d \n", INT_MIN);
    printf("Kich thuc kieu unsigned int la %d\n",sizeof(unsigned int));
    printf("Gia tri max cua kieu unsigned int la %u \n", UINT_MAX);
    printf("Gia tri min cua kieu unsigned int la %u \n", 0);
    printf("Kich thuc kieu unsigned long la %d\n",sizeof(unsigned long));
    printf("Gia tri max cua kieu unsigned long la %lu \n", ULONG_MAX);
    printf("Gia tri min cua kieu unsigned long la %lu \n", 0);
    printf("Kich thuc kieu float la %d\n",sizeof(float));
    printf("Gia tri max cua kieu float la %f \n", FLT_MAX);
    printf("Gia tri min cua kieu float la %f \n", FLT_MIN);
    return 0; 
}