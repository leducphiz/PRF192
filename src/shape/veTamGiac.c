#include <stdio.h>
#include <math.h>

/*
input n: 5
 *  *  *  *  *
	*  *  *  *
	   *  *  *
		  *  *
			 *

----------------------------------------------------
			 *
		  *  *
	   *  *  *
	*  *  *  *
 *  *  *  *  *

----------------------------------------------------
			 *
		  *  *  *
	   *  *  *  *  *
	*  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *

----------------------------------------------------
 *  *  *  *  *  *  *  *  *
	*  *  *  *  *  *  *
	   *  *  *  *  *
		  *  *  *
			 *
*/

void veTamGiac1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("   ");
		}

		for (int j = 0; j < n - i; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

void veTamGiac2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf("   ");
		}

		for (int j = 0; j < i + 1; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

void veTamGiac3(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf("   ");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

void veTamGiac4(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("   ");
		}

		for (int j = 0; j < 2 * (n - i) - 1; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("input n: ");
	scanf("%d", &n);
	veTamGiac1(n);
	printf("\n----------------------------------------------------\n");
	veTamGiac2(n);
	printf("\n----------------------------------------------------\n");
	veTamGiac3(n);
	printf("\n----------------------------------------------------\n");
	veTamGiac4(n);
}
