#include <stdio.h>
int snt (int n)
{
	int x,i;
	for (i=2; i<n; i++)
	{
		if (n%i==0)
		{
			x=0;
			break;
		}
		else 
		{
			x=1;
		}
	}
	return x;
}
int main ()
{
	int n,s;
	printf ("n="); scanf ("%d",&n);
	s= snt (n);
	if (n=1) printf ("\n n is not prime number ");
	if (s==1) printf ("\n n is  prime number ");
	if (s==0) printf ("\n n is not prime number ");
}
	
