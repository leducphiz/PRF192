#include<stdio.h> 
#include<limits.h>
#include<float.h>

int main(void)
{    
    printf("%30s %12s %28s\n", "", "SIZE", "RANGE");

    printf("%-30s %10lu %25d - %d\n", "char ", sizeof(char), CHAR_MIN, CHAR_MAX);//char
    printf("%-30s %10lu %25d - %d\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);//unsigned char
    printf("%-30s %10lu %25hd - %hd\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);//short
    printf("%-30s %10lu %25d - %d\n", "int or signed int", sizeof(int), INT_MIN, INT_MAX);//int
    printf("%-30s %10lu %25d - %ud\n", "unsigned int", sizeof(unsigned int), 0, UINT_MAX);//unsigned int    
    printf("%-30s %10lu %25d - %lu\n", "unsigned long ", sizeof(unsigned long ), 0, ULONG_MAX);
   printf("%-30s %10lu %25le - %le\n", "float", sizeof(float), FLT_MIN, FLT_MAX);//float

    return 0; 
}
