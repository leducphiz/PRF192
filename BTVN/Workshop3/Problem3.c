#include<stdio.h>
#include<math.h>


float saving(float principal, float rate, int year)
{
    return pow((1 + rate), (float)year) * principal;
}

float investment(float future, float rate, int year)
{
    return future / pow((1 + rate), (float)year);
}


void red()
{
    printf("\033[1;31m");
}
void green()
{
    printf("\033[0;32m");
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
	yellow();
    printf("\tPROBLEM 3: FINANCIAL CALCULATOR. \n");
    printf("=========================================\n\n");
    reset();

    char option;

    while (1)
    {
        //Test saving account
        float principal, rate1;
        int year1;

        printf("1. Test saving account\n");

        do
        {
            printf("Principal = ");
            scanf("%f", &principal);
            if (principal < 0)
            {
                red();
                printf("Invalid input. Try again!\n");
                reset();
            }

        } while (principal < 0);

        do
        {
            printf("Annual rate %% ( <1 ) = ");
            fflush(stdin);
            scanf("%f", &rate1);
            if (rate1 < 0.0 || rate1 > 1.0)
            {
                red();
                printf("Invalid input. Try again!\n");
                reset();
            }

        } while (rate1 < 0.0 || rate1 > 1.0);

        do
        {
            printf("No of years = ");
            scanf("%d", &year1);
            if (year1 < 0)
            {
                red();
                printf("Invalid input. Try again!\n");
                reset();
            }

        } while (year1 < 0);

        printf("=> Amount after %d years = ", year1);

        printf("%.2f\n\n", saving(principal, rate1, year1));

        //Investment calculation
        float future, rate2;
        int year2;
        printf("2. Investment calculation\n");

        do
        {
            printf("Future = ");
            scanf("%f", &future);
            if (future < 0)
            {
                red();
                printf("Invalid input. Try again!\n");
                reset();
            }

        } while (future < 0);

        do
        {
            printf("Annual rate %% ( <1 ) = ");
            fflush(stdin);
            scanf("%f", &rate2);
            if (rate2 < 0.0 || rate2 > 1.0)
            {
                red();
                printf("Invalid input. Try again!\n");
                reset();
            }

        } while (rate2 < 0.0 || rate2 > 1.0);

        do
        {
            printf("No of years = ");
            scanf("%d", &year2);
            if (year2 < 0)
            {
                red();
                printf("Invalid input. Try again!\n");
                reset();
            }

        } while (year2 < 0);
        printf("=> Priciple should be = ");

        printf("%.2f\n", investment(future, rate2, year2));

        scanf("%c", &option);
        while (option != 'y' && option != 'n')
        {
            printf("\n\nAnother run (y/n)  :");
            fflush(stdin);
            scanf("%c", &option);
        }
        if (option == 'n')
        {
            break;
        }
    }
}
