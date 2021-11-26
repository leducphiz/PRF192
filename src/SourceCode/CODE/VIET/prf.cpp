#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	printf("enter two integer:"); 	scanf("%d%d", &a,&b);
	
	if (a<b){
	printf("%d %d",a,b);}
	else {
	printf("%d %d",b,a);
	}
	int min;
	min=a<b?a:b;
	printf("\nmin: %d",min);
}
