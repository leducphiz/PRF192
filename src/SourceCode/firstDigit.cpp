#include <stdio.h>
 
int main()
{
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);
    
    int last = number;
    while (last > 9)
    {
        last /= 10;
    }
    printf("Chu so dau tien cua %d la %d", number, last);
 
}
