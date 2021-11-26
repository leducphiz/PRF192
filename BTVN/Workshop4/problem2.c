#include <stdio.h>
#include <math.h>

double myExp(double x, int n)
{
    int i;
    double S = 1, t = 1;
    for (i = 1; i <= n; i++)
    {
        t *= x / i;
        S += t;
    }
    return S;
}
double myExp2(double x, double epsi)
{
    double S = 1;
    int t = 1, n = 0;
    while (S > epsi)
    {
        S *= x / t;
        t++;
        n++;
    }
    return (myExp(x, n));
}

int main()
{
    system("cls");
    double x, epsi;
    int n;
    x = 1.5;
    epsi = 0.00001;
    n = 1000;
    printf("\n");
    printf(" exp(%.1f) = %f\n", x, exp(x));
    printf(" exp(%.1f,%d) = %f\n", x, n, myExp(x, n));
    printf(" exp(%.1f,%f) = %f\n", x, epsi, myExp2(x, epsi));
    printf("\n");
    system("pause");
    return (0);
}
