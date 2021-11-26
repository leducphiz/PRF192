#include<stdio.h>
#include<math.h>

int prime(int n)
{
	if (n<2) 
	return 0;
    int i;
    for (i=2; i< sqrt(n); i++)
    if(n % i == 0) return 0;
    return (1);
}
    int main ()
    {
	
 int n;
	printf("n="); scanf("%d",&n);
    if  (prime(n)==1)
    printf("%d la so nguyen to",n);
    else {
    printf("%d khong phai so nguyen to",n);
}
    }
    
