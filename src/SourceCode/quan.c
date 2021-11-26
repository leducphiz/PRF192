#include<stdio.h>
#include <math.h>

int main (void)
{
  int x = 1;
  for (int num = 1; num < 175; ++num)
    {
        int count = 0; // đếm số ước của a
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && num > 1){
        	while ( x <= 175 ) {
    			printf("%d%c", num, (x%5) ? '\t' : '\n');
    			++x;
  }
		}
            
    }
  
  
}
