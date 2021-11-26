
#include <stdio.h>


int main()
{
    int i,n;
    float  t=1, s;
    printf("Please enter an integer number");
    scanf("%d", &n);
    
   
   for(i=1;i  < n ;i++)
   {
   	t=t * i;
   }
 	printf("Sum = %f", t);  
   
   
}
