#include <stdio.h>

int GlobalNum = 5; // global variable

void Sum(int a, int b)
{
	int sum = a + b; //local variable
	printf("\n Sum = %d", sum);
}

int main()
{
	int x = 5;	//local variable
	int y = 10; //local variable
	Sum(x, GlobalNum);
	Sum(x, y);
}
