#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float n;
 do{
 	scanf("%f",&n);
 }while (n<0);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int t=0; int count=0;
for(int i=n;i>=0;i--)
{  if(i%2!=0){t=t+i;count++;}
   if(count==3) break;
}
 printf("%d",t);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
