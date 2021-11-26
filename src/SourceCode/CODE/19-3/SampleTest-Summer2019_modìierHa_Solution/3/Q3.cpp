#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 int n;
 scanf("%d",&n);
 char a[n];
 for(int i=0;i<=n;i++)
 	{scanf("%c",&a[i]);fflush(stdin);}
 
 int i, j, k, max, temp;
    for(i=0; i<n; i++)
       { max = a[i]; k = i;
         for(j = i+1; j<=n; j++)
             if(a[j] < max) {max= a[j]; k = j;}
         if(k != i) {  temp=a[i];a[i]=a[k];a[k]=temp;}
         
       }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(int i=0;i<=n;i++)
printf("%c\t",a[i]);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
