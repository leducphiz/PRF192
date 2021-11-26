#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[6];
for(int i=0;i<6;i++)
 {scanf("%d",&a[i]); fflush(stdin);}
  int n=5;
 int i, t, k, doicho=0;
    k = 0;
    int temp;
    while(1)
       { doicho=0;
          for(i=0; i<n-k; i++)
              if(a[i+1]>a[i]) 
                { temp=a[i];a[i]=a[i+1]; a[i+1]=temp;
                  doicho = 1;
                }
          if(!doicho) break;
          k++;  
       }

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(int i=0;i<=n;i++)
printf("%d \t",a[i]);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
