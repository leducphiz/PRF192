#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Tang Philepr0vjpno-oo

int main()
{

    int n;
    printf("Input Decimal number n: ");
    scanf("%d", &n);
    int r = 0;
    int power = 0;
    int result = 0;

    while (n > 0)
    {
        r = n % 2;
        result += r * pow(10, power);
        power++;
        n /= 2;
    }
    printf("%d", result);
    return 0;
}