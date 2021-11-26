#include<stdio.h>
#include<math.h>
int prime (int n)
{int i=1;
if (n<2) return (0);
for (i=2; i<=sqrt(n);i++){

	if(n%i==0)
	return(0);
}
	return(1);
}
int soDoiXung(int n){
	int a=0, b, c=n;
	while(n!=0){
		b=n%10;
		a=a*10+b;
		n=n/10;
	}
	return (i);
}
int main()
{
int n,i;
printf("n = "); 
scanf("%d", &n);
/*
if (prime(n)==1) 
{
printf("%d is prime number", n);
}
else  
{
printf("%d is not prime number", n);
}
*/
/*
 printf("%d frist prime integer number:\n",n);
	int dem = 0;
    int i = 2;
    while (dem < n)
	{
        if (prime(i)) 
		{
        printf("%d ", i);
        dem++;
        }
        i++;
	}
	 
}
*/
for(i=1;i<=n;i++){
	if(prime(i)==1){
		printf("%d\t",i);
	}
}
}

