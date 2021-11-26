#include <stdio.h>
void gh (int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf ("\na=%d \nb=%d",a,b);
}
int main ()
{
	int a,b;
	printf ("Enter a="); scanf("%d", &a);
	printf ("Enter b="); scanf("%d", &b);
	gh(a,b);
	printf ("\nAfter");
	printf ("\na=%d \nb=%d",a,b);
}
