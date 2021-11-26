#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  printf("\nTEST Q1 (4 marks):\n");
  printf("1. Run TC 1\n");
  printf("2. Run TC 2\n");
  //tc holds the test case number of test
  int tc;
  printf("Enter TC (0 to exit): "); scanf("%d",&tc);
  if(tc==0) return(0);
  //============================================================
  switch(tc) {
    case 1: { // Start of TC 1

         int a, b, c;
         printf("Enter a = "); scanf("%d",&a);
        //==FOR TC 1, WRITE YOUR STATEMENTS FROM HERE=========
    b= a / 60;
    c= a - b*60;

        //=========TO HERE============
         printf("a = %d, b = %d, c = %d\n",a,b,c); 
         // OUTPUT for marking:
         printf("\nOUTPUT:\n");
         printf("%d %d %d\n",a,b,c); 
         
        };  break; // The end of TC1     

    case 2: { // Start of TC 2

         int m, n; double s;
         printf("Enter m = "); scanf("%d",&m);
         printf("Enter n = "); scanf("%d",&n);

        //== TC 2, WRITE YOUR STATEMENTS FROM HERE =========
        if (n<m){
			int i;
			for(i = 1;i <= n;i++)
			s=s+1/(float)i;
			}
			if (n>=m){
			int i,boichung,x,y;
			while (n<=0|| m<=0);

            x=n;

            y=m;

            while(n!=m)

            {

            if(n>m)

            n-=m;

            else

            m-=n;

            }
			s=((x*y))/n;

			}


 
         //=========TO HERE============
         //-------------------------------------------------------
         if(n<m)
           printf("s = %.4f\n",s);
            else 
             printf("s = %.0f\n",s);
 
         // OUTPUT for marking:
         printf("\nOUTPUT:\n");
         if(n<m)
           printf("%.4f\n",s);
            else 
             printf("%.0f\n",s);

        };  break; // The end of TC2     
         
  }

  printf("\n");
  system ("pause");
  return(0);
}
