#include <stdio.h>
#include <math.h>

int roots(double a, double b, double c, double *x1, double *x2)
{
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *x1 = -b / (2 * a);
        return 1;
    }
    else
    {
        delta = sqrt(delta);
        *x1 = (-b + delta) / (2 * a);
        *x2 = (-b - delta) / (2 * a);
        return 2;
    }
}

int main()
{
    char option;
    double a, b, c, x1, x2;
    while (1)
    {
        printf("\n1. Input the coefficients of the quadratic equation:");
        do
        {
            printf("\nEnter a, b, c:  ");
            scanf("%lf%lf%lf", &a, &b, &c);
            if (!a)
            {
                printf("\nInvalid input( a != 0 ), try again!");
            }
        } while (!a);

        int numNo = roots(a, b, c, &x1, &x2);

        printf("\n2. Solve the equation:");
        if (numNo == 0)
        {
            printf("\nThere are no real roots.");
        }
        else if (numNo == 1)
        {
            printf("\nThere is one real root: %f", x1);
        }
        else if (numNo == 2)
        {
            printf("\nThere are 2 real roots : x1 = %f , x2 = %f", x1, x2);
        }

        scanf("%c", &option);
        while (option != 'y' && option != 'n')
        {
            printf("\n\nAnother run (y/n):");
            fflush(stdin);
            scanf("%c", &option);
            printf("\n");
        }
        if (option == 'n')
        {
            printf("\nHave a good day! ^^");
            break;
        }
    }
}
