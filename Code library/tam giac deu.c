#include <stdio.h>
int main()
{
	int n,i,k;
	printf ("Enter n="); scanf("%d",&n);
	   	for(i = 1; i <= n; i++) 
	{
   		for(k = 1; k <= n-i; k++)
        printf(" ");
    	for(k = 1; k <= i; k++)
        printf("* ");
		printf("\n");
  	}
}
