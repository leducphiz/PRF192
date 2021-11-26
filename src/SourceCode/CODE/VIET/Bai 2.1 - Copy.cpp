#include <stdio.h>
#include <math.h>
long gt(int n)
{
                if(n < 2){
        printf("\n%d is not prime number", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d is prime number", n);
    }else{
        printf("\n%d is not prime number", n);
    }
                
                
} 
int main ()
{
                
                int n,T=0,i;
                printf("Enter n=");scanf("%d",&n);
                if (n<=5)
                {
                                printf("n must be > 5,please re enter");
                                printf("\n Enter n=");scanf("%d",&n);
                }           
                for (i=0;i<=n;i++)
                {                
                                T=T+i;                                
                }
                printf ("\n S1=%d",T);
                  int T2=1;
                  for (i=1;i<=n;i++)
                {                
                                T2=T2*i;                                 
                }
                printf ("\n S2=%d",T2);
                 float T3=0;          
                for (i=1;i<=n;i++)             
                                T3=(float)1/i;                                
                }
                printf ("\n S3=%f",T3);
                int n1;
printf("\nEnter n=");scanf("%d",&n1);
long result=gt(n1);
     
 
}






              
