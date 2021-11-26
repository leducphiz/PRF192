#include <stdio.h>

int primeNum(int n)
{
    if (n <= 1)
        return 0;
    int i;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
        {
            return 0;
        }
    return 1;
}

//color
void red()
{
    printf("\033[1;31m");
}

void cyan()
{
    printf("\033[0;36m");
}
void yellow()
{
    printf("\033[0;33m");
}

void reset()
{
    printf("\033[0m");
}

int main()
{

    system("color");
    char option;
    int a, b, c = 0, d, i, x;
    while (1)
    {
        system("cls");
        // lowest
        do
        {
            cyan();
            printf("Input lowest number: ");
            reset();
            scanf("%d", &a);
            if (a < 0)
            {
                red();
                printf("Lowest number needs to be greater than 1. Try again.\n");
                reset();
            }
        } while (a < 0);

        //highest
        do
        {
            cyan();
            printf("Input highest number: ");
            reset();
            scanf("%d", &b);
            if (b < a)
            {
                red();
                printf("Must be greater than Lowest number. Try again\n");
                reset();
            }
        } while (b < a);

        //column
        cyan();
        printf("Number of column (<8): ");
        reset();
        scanf("%d", &d);
        while (d < 1 || d > 8)
        {
            red();
            printf("Invalid input. Try again...\n");
            reset();
            cyan();
            printf("Number of column (<8): ");
            reset();
            scanf("%d", &d);
        }

        //output
        yellow();
        printf("Prime numbers between %d and %d are: \n", a, b);
        for (i = a; i <= b; i++)
        {

            if (primeNum(i) == 1)
            {
                printf("\t%d", i);
                c += 1;
            }

            if (c == d)
            {
                printf("\n");
                c = 0;
            }
        }
        reset();

        cyan();
        scanf("%c", &option);
        while (option != 'y' && option != 'n')
        {
            printf("\n\nAnother run (y/n)  :");
            fflush(stdin);
            scanf("%c", &option);
        }
        reset();
        if (option == 'n')
        {
            break;
        }
    }
    //getch();
}
