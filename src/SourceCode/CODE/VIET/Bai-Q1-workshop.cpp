#include<stdio.h>
#include<math.h>
int main()
{
	float S1,S2,a,b,c,x;
	printf("Enter a = "); scanf("%f",&a);
	printf("Enter b = "); scanf("%f",&b);
	printf("Enter c = "); scanf("%f",&c);
	printf("Enter x = "); scanf("%f",&x);
	S1= a*x*x + b*x + c;
	printf("S1 = %.2f ,",S1);
	if (b*b-4*a*c>0)
	{
		S2= sqrt(b*b-4*a*c);
		printf("\t S2 = %.2f ",S2);
	}
	else 
	{
	printf("\t S2 = 0.00");
	}
	
	printf("\n Enter a, b, c = "); scanf("%f %f %f",&a,&b,&c);

	if (a+b>c && b+c>a && a+c>b)
	{
		int p;
		float area,perimeter;
		p=((a+b+c)/2);
		perimeter=a+b+c;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Perimeter = %.4f",perimeter);
	printf("\nArea = %.4f",area);
	}
	else
	{
	printf("a,b,c are not sides of a triangle.",a,b,c);
	}
}
