#include <stdio.h>
void gh (int *a,int *b)
{
	int t;
	printf ("\na=%d \nb=%d",*a,*b);
}
#include <stdio.h>

int main() 
{
	int a,n,i,j;
	n=6;
   	printf("Ve tam giac sao deu:\n\n");
   	for(i = 1; i <= n; i++) 
	{
   		for(j = 1; j <= n-i; j++)
        printf(" ");
    for(j = 1; j <= i; j++)
        printf("* ");
		printf("\n");
   }
   return 1;
}
