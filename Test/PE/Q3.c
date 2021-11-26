/*Q3: Nhap n, neu la snt thi in ra 'n is a prime number', khong thi in ra 'n is not a prime number', voi n la so duoc nhap vao*/

#include <stdio.h>

int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    printf("\nOUTPUT\n");
    if (flag == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}