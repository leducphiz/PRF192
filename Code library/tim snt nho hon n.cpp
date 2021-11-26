#include <stdio.h>
int snt (int n)
{
	int x,i;
	if (n==2) 
	return 1;
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
int main()
{
	int i,n,s, count=0;
	printf ("n="); scanf ("%d",&n);
	for (count=0; count<n; count++)
	{
		if (snt(i)==1)
		printf("%d ",i);
		i++;
	}
}
	
