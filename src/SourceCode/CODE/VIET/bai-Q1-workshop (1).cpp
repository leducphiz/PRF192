#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x,S1,S2;
	printf("nhap a=:"); scanf("%d",&a);
	printf("nhap b=:"); scanf("%d",&b);
	printf("nhap c=:"); scanf("%d",&c);
	printf("nhap x=:"); scanf("%f",&x);
	S1=a*x*x+b*x+c;
	printf("S1=%f",S1);
	if (b*b-4*a*c>0){
		S2= sqrt(b*b-4*a*c);
		printf("\t S2=%f",S2);
	}
	else
	printf("\t S2=0");
	printf("\n nhap a, b, c="); scanf("%d%d%d",&a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		int p;
		float area,perimeter;
		p=((a+b+c)/2);
		perimeter=a+b+c;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("perimeter=%f",perimeter);
		printf("\t area=%f",area);
	}
	else {printf("a,b,c are not sides of a triangle.",a,b,c);
	}
}
