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
int main ()
{
	int n,s;
	printf ("n="); scanf ("%d",&n);
	int count = 0; 
    int i = 2;   
    while (count<n)
	{
        if (snt(i)==1) 
		{
            printf("%d ", i);
            count++;
        }
        i++;
    }
}
