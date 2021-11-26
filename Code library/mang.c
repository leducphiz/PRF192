/*creat a integer array : name is a, size of a is 100;
input n elements of a from keyboard
display all value of elements of a to screen
display all elements of array that is prime
display all elements of array that is palindrom*/
#include <stdio.h>
#include<math.h>
int isPrime(int n)
{
	if(n<2) return(0);
	int i;
	for(i=2;i<=sqrt(n);i++)
	if (n%i==0) return (0);
	return(1);
}
int SoDoiXung(int n)
{
	int a=0, b, c=n;
	while(n!=0)
	{
		b=n%10;
		a=a*10+b;
		n=n/10;
	}
	if(a==c) return 1;
	return 0;
}
void input( int a[], int n)
{ 
	int i;
	for(i=0;i<=n-1;i++)
  	{ 
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}
void output(int a[],int n)
{
	int i ;
	for(i=0;i<=n-1;i++)
   	printf("%d\t",a[i]);
}
void bubblesort(int a[],int n)
{
	int i,j;
	int temp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void selsort(int a[], int n)
{
	int i, j, k, max,temp;
    for(i=0; i<n-1; i++)
    { 
	   	max = a[i]; k = i;
        for(j = i+1; j<n; j++)
        if(a[j] > max) 
		{
			max= a[j]; k = j;
		}
        if(k != i)
        {
        	temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
    }
}
void printArray1(int a[], int n)
{
    int i;
    printf("\n sellect sort: ");
    for (i=0; i < n; i++)
        printf("%d\t ", a[i]);
    printf("\n");
}	 
void printArray(int a[], int n)
{
    int i;
    printf("\n bubble sort: ");
    for (i=0; i < n; i++)
        printf("%d\t ", a[i]);
    printf("\n");
}	
int main()
{
	int a[100];int n;
 	printf("n=");scanf("%d",&n);
 	int i;
 	input(a,n);
 	output(a,n);
   	printf("\n");
	for(i=0;i<=n-1;i++)
  	if(isPrime(a[i]))
   	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<=n-1;i++)		 
   	if(SoDoiXung(a[i])==1)
   	printf("%d\t",a[i]);
   	bubblesort(a,n);
   	printArray(a,n);
   	selsort(a,n);
   	printArray1(a,n);
}
