#include <stdio.h>

void input(int *num, int *den)
{
    int tmpNum, tmpDen;
    printf("Enter numerator: ");
    scanf("%d", &tmpNum);
    *num = tmpNum;
    do
    {
        printf("Enter denominator: ");
        scanf("%d", &tmpDen);
    } while (tmpDen == 0);
    *den = tmpDen;
}

void display(int num, int den)
{
    printf("%d/%d", num, den);
}

int UCLN(int num, int den)
{
    if (num % den == 0)
        return den;
    else
        return UCLN(den, num % den);
}
void simplify(int *num, int *den)
{
    int tmp = UCLN(*num, *den);
    *num /= tmp;
    *den /= tmp;
    if (*den != 1)
    {
        if (*den < 0)
        {
            *den *= -1;
            *num *= -1;
        }
        printf("%d/%d", *num, *den);
    }
    else
    {
        printf("%d", *num);
    }
}

int main()
{
    int num, den;
    char option;
    while (1)
    {
        system("cls");
        printf("\n1. Input fraction\n\n");
        input(&num, &den);

        printf("\n2. Simplify fraction \n");
        display(num, den);

        printf("\n=\n");
        simplify(&num, &den);

        scanf("%c", &option);
        while (option != 'y' && option != 'n')
        {
            printf("\nAnother run (y/n):");
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
