#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char a[5][100];
  for(int i=0;i<=5;i++)
  gets(a[i]);
  int i, j,n=5;
char temp[100];

    for(i=0; i<=n/2; i++)
	{strcpy(temp,a[i]);strcpy(a[i],a[n-i]);strcpy(a[n-i],temp);
       }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(int i=0;i<=n;i++)
printf("%s\t",a[i]);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
