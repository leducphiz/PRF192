/*
	Author: Le Duc Phi
	Class: SE16426
	Workshop3 synthesized  (problem 1, 2, 3) 
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// color
void red();
void cyan();
void yellow();
void green();
void reset();

char function_choice();
unsigned long long int Dec2Bin();
int SumDigits();
int Reverse();
void problem1();

int primeNum();
void problem2();

void problem3();
float saving(float principal, float rate, int year)
{
    return pow((1 + rate), (float)year) * principal;
}

float investment(float future, float rate, int year)
{
    return future / pow((1 + rate), (float)year);
}

int main()
{
    char choice;

    //
    do
    {
        choice = function_choice();

        switch (choice)
        {
        case '1':
            problem1();
            break;
        case '2':
            problem2();
            break;
        case '3':
            problem3();
        }

        if (choice != '0')
        {
            printf("\n\n---\n");
            printf("Press any key to back to main menu.");
            getch();
        }
    } while (choice != '0');

    return 0;
}

char function_choice()
{
    char choice;
    system("cls");
    cyan();
    printf("\t\tWORKSHOP 3 - Le Duc Phi\n");
    printf("========================================================\n");

    printf("\n1) PROBLEM 1: CHECK BINARY, SUM DIGITS, REVERSE.");
    printf("\n2) PROBLEM 2: TABLE OF PRIMES.");
    printf("\n3) PROBLEM 3: FINANCIAL CALCULATOR.");
    printf("\n0) Quit\n");

    printf("\n---\n");
    printf("Enter a letter (1, 2, 3, 0) to select the corresponding function: ");
    reset();

    fflush(stdin);
    choice = getchar();
    system("cls");

    return choice;
}

//Dec to Bin
unsigned long long int Dec2Bin(int n)
{
    int r = 0;
    int power = 0;
    unsigned long long int result = 0;

    while (n > 0)
    {
        r = n % 2;
        result += r * pow(10, power);
        power++;
        n /= 2;
    }

    return result;
}

// sum of all digits
int SumDigits(int n)
{
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}

//reverse number
int Reverse(int n)
{
    int reNum = n % 10;
    n /= 10;
    int last;
    while (n > 0)
    {
        last = n % 10;
        n /= 10;
        reNum = reNum * 10 + last;
    }
    return reNum;
}
//color
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

//

void problem1()
{
    green();
    printf("\tPROBLEM 1:\n");
    reset();

    printf("==========================================\n\n");

    char option;
    // Dec to Bin
    while (1)
    {
        //system("cls");
        int n1, n2;
        system("color");
        do
        {
            printf("Enter n= ");
            scanf("%d", &n1);
            if (n1 < 0)
            {
                red();
                printf("Invalid input. Try again...\n");
                reset();
            }
        } while (n1 < 0);
        cyan();
        printf("%d in binary number format is: %llu\n", n1, Dec2Bin(n1));
        reset();

        //sum of all digits and reverse
        do
        {
            printf("Enter n= ");
            scanf("%d", &n2);
            if (n2 < 0)
            {
                red();
                printf("Invalid input. Pls input an interger number..\n");
                reset();
            }
        } while (n2 < 0);

        cyan();
        printf("The sum of all digits in %d is %d\n", n2, SumDigits(n2));
        printf("Ther reverse number of %d is %d\n", n2, Reverse(n2));
        reset();

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

void problem2()
{
    green();
    printf("\tPROBLEM 2: TABLE OF PRIMES\n");
    reset();
    printf("============================================\n\n");

    system("color");
    char option;
    int a, b, c = 0, d, i, x;
    while (1)
    {
        //system("cls");
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
}

void problem3()
{
    yellow();
    printf("\tPROBLEM 3: FINANCIAL CALCULATOR. \n");
    printf("==============================================\n\n");
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
