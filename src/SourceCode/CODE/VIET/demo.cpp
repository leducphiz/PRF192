#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float s1, s2, s3;
	printf(" Enter n=");
	scanf("%f",&n);
    if (n<=5)
	 {
     printf ("n must be > 5, please reenter!"); 
     printf ("\nEnter n="); scanf("%f",&n);
     int S1=0; 	
	 for ( int i=1;i<= n; i++){
     S1= S1+i;
     S2= S2*i;
	 S3= S3+((float)1/i);
	 }
     printf("S1=:%f",S1);   
     printf("\nS2=:%f",S2);   
     printf("\nS3=:%f",S3);
     }
    else
    {   
	    for ( int i=1;i<= n; i++)
		{
    	S1=S1+i;
    	S2=S2*i;
    	S3=S3+((float)1/i);
		}
    	printf("S1=:%f",S1);
    	printf("\nS2=:%f",S2);
		printf("\nS3=:%f",S3);    
}
    printf("\n\nEnter n = ");
    scanf("%f", &n);
    if(n < 2){
        printf("\n%d is not a prime number", n);
        return 0;
    }
    int T = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(T=n % i == 0){
            T++;
        }
    }
    if(T == 0){
        printf("\n%f is a prime number", n);
    }
	else
	{
        printf("\n%f is not a prime number", n);
    }
}

       


	


