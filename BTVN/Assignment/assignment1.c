/*
Assignment 1 - Income tax
Class ID : SE1641
Student ID : HE163212
Student Name : Le Duc Phi
Due Date : 18/10/2020
I declare that this assignment is my own work
in accordance with FPT Policy.
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

// color
void red();
void cyan();
void yellow();
void green();
void reset();

// MAIN
int main()
{
	char option, pensionOption, healthOption;
	double income, charity, dependants, total, tax = 0, incomeTotal;
	float pension, health;
	int personal = 4000;
	system("color");
	while (1)
	{
		system("cls");
		red();
		printf("\nChoose one of the folowing options:");
		printf("\n1. Tax calculator");
		printf("\n0. Exit");
		reset();

		// check input  0 or 1
		while (option != '1' && option != '0')
		{
			printf("\nYour sellection (0 -> 1):");
			fflush(stdin);
			scanf("%c", &option);
			if ((option == '1') || (option == '0'))
			{
				break;
			}
			else
			{
				red();
				printf("Your sellection (0 -> 1):, Try again! \n");
				reset();
				continue;
			}
		}

		// exit
		if (option == '0')
		{
			printf("\nHave a good day! ^^");
			printf("\nPress any key to exit! "); // out
			break;
		}
		// program
		else if (option == '1')
		{
			system("cls");
			cyan();
			printf("\n\t[Income tax Cacuilator] by Phi Le");
			printf("\n===================================================");
			printf("\n Enter personal information:");
			reset();
			// income
			do
			{
				printf("\nIncome for the current month (in thousand VND): ");
				scanf("%lf", &income);
				if (income < 0)
				{
					red();
					printf("Invalid input, try again!\n");
					reset();
				}
			} while (income < 0);

			// input pension contributions

			scanf("%c", &pensionOption);
			while (pensionOption != 'y' && pensionOption != 'n')
			{
				printf("Pension contributions (5%%) y/n?  ");
				fflush(stdin);
				scanf("%c", &pensionOption);
				if ((pensionOption == 'y') || (pensionOption == 'n'))
				{
					break;
				}
				else
				{
					red();
					printf("You must press 'Y' or 'N' only, try again\n");
					reset();
					continue;
				}
			}

			switch (pensionOption)
			{
			case 'y':
				pension = 0.05;
				break;
			case 'n':
				pension = 0;
				break;
			}

			// input health insurance

			scanf("%c", &healthOption);
			while (healthOption != 'y' && healthOption != 'n')
			{
				printf("Health insurance (1%%) y/n?  ");
				fflush(stdin);
				scanf("%c", &healthOption);
				if ((healthOption == 'y') || (healthOption == 'n'))
				{
					break;
				}
				else
				{
					red();
					printf("You must press 'Y' or 'N' only, try again\n");
					reset();
					continue;
				}
			}

			switch (healthOption)
			{
			case 'y':
				health = 0.01;
				break;
			case 'n':
				health = 0;
				break;
			}

			// input number of dependants < 18 years old

			do
			{
				printf("Number of dependants < 18 years old: ");
				scanf("%lf", &dependants);
				if (dependants < 0)
				{
					red();
					printf("Invalid input, try again!\n");
					reset();
				}
			} while (dependants < 0);

			// input gift of charity
			do
			{
				printf("Gift of charity: ");
				scanf("%lf", &charity);
				if (charity < 0)
				{
					printf("Invalid input, try again!\n");
				}
			} while (charity < 0);

			// process
			total = personal + income * pension + income * health + dependants * 1600 + charity;
			incomeTotal = income - total;

			if (incomeTotal <= 5000)
			{
				tax = incomeTotal * 0.05;
			}
			else if (incomeTotal > 5000 && incomeTotal <= 10000)
			{
				tax = 5000 * 0.05 + (incomeTotal - 5000) * 0.1;
			}
			else if (incomeTotal > 10000 && incomeTotal <= 18000)
			{
				tax = 5000 * 0.05 + 5000 * 0.1 + (incomeTotal - 10000) * 0.15;
			}
			else if (incomeTotal > 18000 && incomeTotal <= 32000)
			{
				tax = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + (incomeTotal - 18000) * 0.2;
			}
			else if (incomeTotal > 32000 && incomeTotal <= 52000)
			{
				tax = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + 14000 * 0.2 + (incomeTotal - 32000) * 0.25;
			}
			else if (incomeTotal > 52000 && incomeTotal <= 80000)
			{
				tax = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + 14000 * 0.2 + 20000 * 0.25 + (incomeTotal - 52000) * 0.3;
			}
			else if (incomeTotal > 80000)
			{
				tax = 5000 * 0.05 + 5000 * 0.1 + 8000 * 0.15 + 14000 * 0.2 + 20000 * 0.25 + 28000 * 0.3 + (incomeTotal - 80000) * 0.35;
			}

			// output
			cyan();
			printf("\n\tGross Income:        %5.1lf\n", income);
			yellow();
			printf("  [Deduction]\n");
			cyan();
			printf("\tPersonal allowance: %13.1lf\n", personal);
			printf("\tPension contributions: %10.1lf\n ", income * pension);
			printf("\tHealth insurance: %15.1lf\n", income * health);
			printf("\tDependant: %22.1lf\n", dependants * 1600);
			printf("\tCharity: %24.1lf\n", charity);
			yellow();
			printf("-------------------------------------------------\n");
			red();
			printf("Total: %30.1lf\n", total);
			printf("Taxable Income: %21.1lf\n", incomeTotal);
			printf("Tax: %32.1lf\n", tax);
			printf("Net Income: %25.1lf\n", income - tax);

			reset();
		}

		printf("\n\tAnother run (y/n)  :");
		option = getch();
		while (option != 'y' && option != 'n')
		{
			fflush(stdin);
			option = getch();
		}
		if (option == 'n')
		{
			yellow();
			printf("\n\tHave a good day! ^^");
			reset();
			break;
		}
	}
	getch();
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
