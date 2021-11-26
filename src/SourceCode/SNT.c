#include <stdio.h>
#include <math.h>
int main()
{
	printf("Table of Primes\n");
	printf("===============\n");
	printf("Lower limit: 0 \nUpper limit: 175 \n# of columns: 5\n\n");
	
	int x=0;
    for (int num = 1; num < 175; ++num)
    {
        int count = 0; 
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && num > 1){
        	printf("%d\t", num);
        	x++;
        	if(x%5==0) printf("\n");
		}
     
    }
}
 
