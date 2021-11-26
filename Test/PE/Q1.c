#include <stdio.h>

int main()
{
    double x, pi = 3.14, dienTich;

    scanf("%lf", &x);
    dienTich = x * x * pi;
    printf("\nOUTPUT:\n");
    printf("%.2lf", dienTich);
}