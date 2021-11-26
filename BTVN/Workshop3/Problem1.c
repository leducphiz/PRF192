
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void cyan()
{
    printf("\033[0;36m");
}

void reset()
{
    printf("\033[0m");
}

//
int main()
{
    char option;
    // Dec to Bin
    while (1)
    {
    	system("cls");
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
                printf("Invalid input. Try again...\n");
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
   // getch();
}
